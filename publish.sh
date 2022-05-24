git add .
git commit -a -m "发布1.2.6,修改共享屏幕关闭摄像头问题，调整被叫页面视觉逻辑"
git push origin master
git tag 1.2.6  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings