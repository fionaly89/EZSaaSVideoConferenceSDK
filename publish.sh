git add .
git commit -a -m "发布1.1.29,新增加载过程"
git push origin master
git tag 1.1.29  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings