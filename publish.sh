git add .
git commit -a -m "发布1.1.97,解决加入会议页面缺陷"
git push origin master
git tag 1.1.97  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
