git add .
git commit -a -m "发布1.2.2,解决无法挂断问题"
git push origin master
git tag 1.2.2  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings