git add .
git commit -a -m "发布1.4.3,解决数组遍历可能导致的崩溃问题-show"
git push origin master
git tag 1.4.3 
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings