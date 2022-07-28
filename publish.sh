git add .
git commit -a -m "发布1.4.9,解决内测问题-hik"
git push origin master
git tag 1.4.9 
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings