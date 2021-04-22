git add .
git commit -a -m "发布1.1.63,新增举手等功能，适配v1.0.6版本"
git push origin master
git tag 1.1.63  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings