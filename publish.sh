git add .
git commit -a -m "发布1.1.68,新增联席主持人功能"
git push origin master
git tag 1.1.68  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings