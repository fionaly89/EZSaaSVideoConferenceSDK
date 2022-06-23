git add .
git commit -a -m "发布1.3.8,移除无用权限-show"
git push origin master
git tag 1.3.8 
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings