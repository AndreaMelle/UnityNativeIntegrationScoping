#!/bin/sh

export AWS_ACCESS_KEY_ID=AKIAIPUYEAG4FZNOZ26Q
export AWS_SECRET_ACCESS_KEY=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
export AWS_DEFAULT_REGION=eu-west-1

function print_error () {
  echo $'\e[31m'$1$'\e[39m'
  echo "Usage ./asset-bundles-sync.sh <path-to-assetbundles-dir> <s3-bucket-name>"
}

if [ ! -d "$1" ]; then
  print_error "Invalid AssetBundle folder. $1"
  exit 1
fi

echo "Syncing $1 to $2 ..."

aws s3 sync $1 s3://$2 --delete --grants read=uri=http://acs.amazonaws.com/groups/global/AllUsers --region eu-west-1 --exclude "*.DS_Store"

echo "Sync $1 to $2 done."
