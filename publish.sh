git add .
git commit -a -m "发布1.9.5，修改内测问题-ezviz"
git push origin master
git tag 1.9.5
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
