git add .
git commit -a -m "发布1.3.4,修改内测问题-show"
git push origin master
git tag 1.3.4 
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings