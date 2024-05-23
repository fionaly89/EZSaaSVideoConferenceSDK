git add .
git commit -a -m "发布2.0.5，新增呼叫功能-hik"
git push origin master
git tag 2.0.5
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
