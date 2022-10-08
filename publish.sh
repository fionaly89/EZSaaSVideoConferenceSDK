git add .
git commit -a -m "发布1.5.4,调整查询被叫接口逻辑，调整MQTT初始化与释放策略，移除日历权限依赖-hik"
git push origin master
git tag 1.5.4
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings