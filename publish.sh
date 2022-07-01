git add .
git commit -a -m "发布1.4.2,修改举手状态不正确问题-show"
git push origin master
git tag 1.4.2 
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings