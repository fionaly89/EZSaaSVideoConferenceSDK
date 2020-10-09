git add .
git commit -a -m "发布1.1.20,调整进入会议接口逻辑"
git push origin master
git tag 1.1.20  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings