git add .
git commit -a -m "发布1.1.49,数据转换保护"
git push origin master
git tag 1.1.49  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings