git add .
git commit -a -m "发布1.7.2，完善日志上报功能-hik"
git push origin master
git tag 1.7.2
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
