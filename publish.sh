git add .
git commit -a -m "发布1.1.26,修改BUG"
git push origin master
git tag 1.1.26  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings