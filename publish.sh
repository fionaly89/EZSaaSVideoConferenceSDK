git add .
git commit -a -m "发布1.5.0,解决内测问题-hik"
git push origin master
git tag 1.5.0
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings