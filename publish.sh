git add .
git commit -a -m "发布1.1.27,修改BUG"
git push origin master
git tag 1.1.27  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings