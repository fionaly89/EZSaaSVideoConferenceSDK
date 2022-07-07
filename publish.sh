git add .
git commit -a -m "发布1.4.4,新增查询呼叫状态功能-hik"
git push origin master
git tag 1.4.4 
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings