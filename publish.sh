git add .
git commit -a -m "发布1.1.57,新增外部依赖"
git push origin master
git tag 1.1.57  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings