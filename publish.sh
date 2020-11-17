git add .
git commit -a -m "发布1.1.33,修改被退出会议处理逻辑"
git push origin master
git tag 1.1.33  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings