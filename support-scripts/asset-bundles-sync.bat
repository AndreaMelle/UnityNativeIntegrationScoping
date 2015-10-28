set AWS_ACCESS_KEY_ID=AKIAIPUYEAG4FZNOZ26Q
set AWS_SECRET_ACCESS_KEY=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
set AWS_DEFAULT_REGION=eu-west-1

aws s3 sync %1 s3://%2 --delete --grants read=uri=http://acs.amazonaws.com/groups/global/AllUsers --region eu-west-1 --exclude "*.DS_Store"
