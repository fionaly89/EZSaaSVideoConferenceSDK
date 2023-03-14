git add .
git commit -a -m "发布1.7.6，修改呼叫无法再次挂断问题-hik"
git push origin master
git tag 1.7.6
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
