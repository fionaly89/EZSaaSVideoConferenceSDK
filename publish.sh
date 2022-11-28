git add .
git commit -a -m "发布1.6.4，解决自测问题-hik"
git push origin master
git tag 1.6.4
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
