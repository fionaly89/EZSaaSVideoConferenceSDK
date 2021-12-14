git add .
git commit -a -m "发布1.1.75,新增美颜功能支持"
git push origin master
git tag 1.1.75  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings