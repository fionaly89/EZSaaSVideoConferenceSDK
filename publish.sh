git add .
git commit -a -m "发布HikAudioRoute.1，海外线路加速、音频输出通道切换功能"
git push origin master
git tag 1.9.9
git push --tag
pod trunk push EZSaaSVideoConferenceSDK.podspec --skip-import-validation --allow-warnings
