git add .
git commit -a -m "发布1.1.64,新增功能配置"
git push origin master
git tag 1.1.64  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings