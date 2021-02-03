git add .
git commit -a -m "发布1.1.52,修改内测问题"
git push origin master
git tag 1.1.52  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings