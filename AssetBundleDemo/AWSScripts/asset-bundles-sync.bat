aws s3 sync %1 s3://%2 --delete --grants read=uri=http://acs.amazonaws.com/groups/global/AllUsers --region eu-west-1 --exclude "*.DS_Store"