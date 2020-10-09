git add .
git commit -a -m "发布1.1.18,调整进入会议接口逻辑"
git push origin master
git tag 1.1.18  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec