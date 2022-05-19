git add .
git commit -a -m "发布1.2.4,新增共享时发送多流的功能"
git push origin master
git tag 1.2.4  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings