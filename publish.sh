git add .
git commit -a -m "发布1.8.7，完善等候室功能-hik"
git push origin master
git tag 1.8.7
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
