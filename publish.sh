git add .
git commit -a -m "发布1.1.81,修复编译问题"
git push origin master
git tag 1.1.81  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
