git add .
git commit -a -m "发布1.1.39,新增日志输出"
git push origin master
git tag 1.1.39  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings