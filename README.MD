###工程创建流程：
1. 创建web工程：`egret create puzzle [--type game]`
2. 创建ios工程：`egret create_app puzzle_ios -f puzzle -t tools/egret-ios-support-3.1.3`
3. 创建android工程：`egret create_app puzzle_android -f puzzle -t tools/egret-android-support-3.1.3`

###目录结构：
- puzzle：web工程目录
- puzzle_ios：ios工程目录
- puzzle_android：android工程目录
- tools：app打包工具及配置
	+ egret-ios-support-3.1.3：ios打包工具
	+ egret-android-support-3.1.3：android打包工具
	+ appBuilder：app发布配置，ant调用
	+ apps：打包的apk与ipa存放目录
	+ keys：打包中所需要的ios、android证书

对h5代码修改后调用`egret build puzzle --runtime native -e`，将修改后的内容同步到ios及android工程中