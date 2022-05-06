git add .
git commit -a -m "发布1.2.0,优化断线重连机制"
git push origin master
git tag 1.2.0  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings