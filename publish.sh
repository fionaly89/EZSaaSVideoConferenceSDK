git add .
git commit -a -m "发布1.1.14"
git push origin master
git tag 1.1.14  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec