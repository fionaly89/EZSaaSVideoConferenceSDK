git add .
git commit -a -m "发布1.1.47,修改被叫页面逻辑错误问题"
git push origin master
git tag 1.1.47  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings