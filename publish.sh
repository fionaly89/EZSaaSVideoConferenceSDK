git add .
git commit -a -m "发布1.5.7,调整错误信息展示逻辑-hik"
git push origin master
git tag 1.5.7
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings