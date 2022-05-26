git add .
git commit -a -m "发布1.2.7,修改多流模式下，共享屏幕画中画没有禁用问题；修改呼叫超时页面没有第一时间关闭问题"
git push origin master
git tag 1.2.7  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings