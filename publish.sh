git add .
git commit -a -m "发布1.1.72,更新图标"
git push origin master
git tag 1.1.72  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings