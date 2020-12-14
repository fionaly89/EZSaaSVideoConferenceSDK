git add .
git commit -a -m "发布1.1.38,修改主持人状态判断逻辑"
git push origin master
git tag 1.1.38  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings