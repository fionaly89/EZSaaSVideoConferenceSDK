git add .
git commit -a -m "发布1.9.4，调整拷贝分享链接逻辑-ezviz"
git push origin master
git tag 1.9.4
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
