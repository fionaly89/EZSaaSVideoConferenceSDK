git add .
git commit -a -m "发布1.1.44,修改AFNetworking 依赖逻辑"
git push origin master
git tag 1.1.44  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings