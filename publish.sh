git add .
git commit -a -m "发布1.9.6，新增云录制功能-hik"
git push origin master
git tag 1.9.6
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
