git add .
git commit -a -m "发布1.1.62,修改呼叫逻辑"
git push origin master
git tag 1.1.62  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings