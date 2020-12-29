git add .
git commit -a -m "发布1.1.42,调整颜色"
git push origin master
git tag 1.1.42  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings