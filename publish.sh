git add .
git commit -a -m "发布1.2.8,新增设备唯一标识设置功能"
git push origin master
git tag 1.2.8  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings