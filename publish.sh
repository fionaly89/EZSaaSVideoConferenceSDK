git add .
git commit -a -m "发布1.1.36,修改多语言逻辑"
git push origin master
git tag 1.1.36  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings