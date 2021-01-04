git add .
git commit -a -m "发布1.1.45,新增单独会议逻辑"
git push origin master
git tag 1.1.45  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings