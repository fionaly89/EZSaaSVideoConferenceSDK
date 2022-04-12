git add .
git commit -a -m "发布1.1.93,新增切换服务地址功能"
git push origin master
git tag 1.1.93  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
