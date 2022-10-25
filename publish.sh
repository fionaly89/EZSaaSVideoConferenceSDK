git add .
git commit -a -m "发布1.5.9,移除查询被呼接口、解决自测问题-hik"
git push origin master
git tag 1.5.9
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings