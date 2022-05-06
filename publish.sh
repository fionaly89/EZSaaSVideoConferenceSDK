git add .
git commit -a -m "发布1.2.1,新增获取呼叫ID接口"
git push origin master
git tag 1.2.1  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings