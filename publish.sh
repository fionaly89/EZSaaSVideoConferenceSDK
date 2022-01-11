git add .
git commit -a -m "发布1.1.79,已知功能优化，已知问题修复"
git push origin master
git tag 1.1.79  
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
