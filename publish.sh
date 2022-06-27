git add .
git commit -a -m "发布1.4.0,修改呼叫会议默认时长问题-hik"
git push origin master
git tag 1.4.0 
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings