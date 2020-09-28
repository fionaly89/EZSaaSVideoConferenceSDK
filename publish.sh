git add .
git commit -a -m "发布1.1.17,解决共享屏幕BUG"
git push origin master
git tag 1.1.17  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec