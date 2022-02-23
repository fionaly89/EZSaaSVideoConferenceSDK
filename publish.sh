git add .
git commit -a -m "发布1.1.85,解决退出会议后显示未接听问题"
git push origin master
git tag 1.1.85  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
