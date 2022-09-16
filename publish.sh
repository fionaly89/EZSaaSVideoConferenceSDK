git add .
git commit -a -m "发布1.5.1,新增多语言支持-hik"
git push origin master
git tag 1.5.1
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings