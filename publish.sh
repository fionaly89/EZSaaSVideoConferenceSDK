git add .
git commit -a -m "发布1.1.34,修改呼叫展示逻辑"
git push origin master
git tag 1.1.34  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings