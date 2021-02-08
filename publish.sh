git add .
git commit -a -m "发布1.1.60,规避摄像头关闭时切换前后摄像头导致的崩溃问题"
git push origin master
git tag 1.1.60  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings