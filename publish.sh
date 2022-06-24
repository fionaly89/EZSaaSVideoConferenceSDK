git add .
git commit -a -m "发布1.3.9,修改内测问题-hik"
git push origin master
git tag 1.3.9 
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings