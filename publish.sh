git add .
git commit -a -m "发布1.7.7，修改编译警告问题-hik"
git push origin master
git tag 1.7.7
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
