git add .
git commit -a -m "发布1.1.41,兼容新SDK"
git push origin master
git tag 1.1.41  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings