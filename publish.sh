git add .
git commit -a -m "发布2.0.0，新增海外加速功能-hik"
git push origin master
git tag 2.0.0
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
