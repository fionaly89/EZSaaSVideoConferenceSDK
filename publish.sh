git add .
git commit -a -m "发布1.4.1,修改退会取消呼叫问题问题-hik"
git push origin master
git tag 1.4.1 
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings