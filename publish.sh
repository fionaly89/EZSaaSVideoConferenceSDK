git add .
git commit -a -m "发布1.6.8，解决内测问题-hik"
git push origin master
git tag 1.6.8
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
