git add .
git commit -a -m "发布1.2.5,新增透传枚举类型"
git push origin master
git tag 1.2.5  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings