git add .
git commit -a -m "发布1.1.43,修改图片获取逻辑"
git push origin master
git tag 1.1.43  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings