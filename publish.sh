git add .
git commit -a -m "发布1.1.30,修改音频采样率默认值"
git push origin master
git tag 1.1.30  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings