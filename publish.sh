git add .
git commit -a -m "发布1.5.3,使用旧版本编译器重新打包-hik"
git push origin master
git tag 1.5.3
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings