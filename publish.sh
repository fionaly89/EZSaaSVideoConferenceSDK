git add .
git commit -a -m "发布1.1.96,新增呼叫功能"
git push origin master
git tag 1.1.96  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
