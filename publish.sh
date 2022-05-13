git add .
git commit -a -m "发布1.2.3,解决呼叫接听后被自动取消等问题"
git push origin master
git tag 1.2.3  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings