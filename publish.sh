git add .
git commit -a -m "发布1.7.4，新增pip支持-hik"
git push origin master
git tag 1.7.4
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
