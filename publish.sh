git add .
git commit -a -m "发布1.7.5，修改pip问题-hik"
git push origin master
git tag 1.7.5
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
