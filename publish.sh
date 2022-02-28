git add .
git commit -a -m "发布1.1.86,解决第一次入会失败的问题"
git push origin master
git tag 1.1.86  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
