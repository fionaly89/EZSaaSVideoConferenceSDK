git add .
git commit -a -m "发布1.1.59,解决小窗口问题"
git push origin master
git tag 1.1.59  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings