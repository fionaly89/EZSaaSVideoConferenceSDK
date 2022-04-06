git add .
git commit -a -m "发布1.1.92,新增设置线路功能"
git push origin master
git tag 1.1.92  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
