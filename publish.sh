git add .
git commit -a -m "发布1.1.61,新增新功能"
git push origin master
git tag 1.1.61  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings