git add .
git commit -a -m "发布1.4.7,解决错误的发送忙状态问题-hik"
git push origin master
git tag 1.4.7 
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings