git add .
git commit -a -m "发布1.6.2，解决部分图片无法展示问题-hik"
git push origin master
git tag 1.6.2
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
