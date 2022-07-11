git add .
git commit -a -m "发布1.4.5,解决多次查询异常问题-hik"
git push origin master
git tag 1.4.5 
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings