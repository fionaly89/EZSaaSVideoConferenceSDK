git add .
git commit -a -m "发布1.9.3，线路自动选择功能(外网线路优先)-hik"
git push origin master
git tag 1.9.3
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
