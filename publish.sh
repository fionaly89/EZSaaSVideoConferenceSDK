git add .
git commit -a -m "发布1.1.99,新增取消会议接口"
git push origin master
git tag 1.1.99  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings