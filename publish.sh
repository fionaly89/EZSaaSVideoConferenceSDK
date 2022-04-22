git add .
git commit -a -m "发布1.1.98,解决企业成员列表页面图标不显示问题"
git push origin master
git tag 1.1.98  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings