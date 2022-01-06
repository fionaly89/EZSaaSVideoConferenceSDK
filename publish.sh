git add .
git commit -a -m "发布1.1.77,去除多余的日志"
git push origin master
git tag 1.1.77  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings