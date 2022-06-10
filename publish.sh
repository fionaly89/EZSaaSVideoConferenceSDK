git add .
git commit -a -m "发布1.3.0,修改呼叫功能问题"
git push origin master
git tag 1.3.0 
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings