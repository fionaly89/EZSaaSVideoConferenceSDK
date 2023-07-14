git add .
git commit -a -m "发布1.9.2，完善线路自动选择功能-hik"
git push origin master
git tag 1.9.2
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
