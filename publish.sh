git add .
git commit -a -m "发布1.4.6,解决无法刷新hiklink头像问题-hik"
git push origin master
git tag 1.4.6 
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings