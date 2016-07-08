###工程创建流程：
1. 创建web工程：`egret create puzzle [--type game]`
2. 创建ios工程：`egret create_app puzzle_ios -f puzzle -t tools/egret-ios-support-3.1.3`
3. 创建android工程：`egret create_app puzzle_android -f puzzle -t tools/egret-android-support-3.1.3`

---

###目录结构：
- puzzle：web工程目录
- puzzle_ios：ios工程目录
- puzzle_android：android工程目录
- tools：app打包工具及配置
	+ egret-ios-support-3.1.3：ios打包工具
	+ egret-android-support-3.1.3：android打包工具
	+ appBuilder：ant配置目录
	+ keys：打包中所需要的ios、android证书

对h5代码修改后调用`egret build puzzle --runtime native -e`，将修改后的内容同步到ios及android工程中

---

###发布ios及android包
+ 进入tools/appBuilder文件夹，修改文件夹内的三个.properties文件：
- build.properties：项目基本配置
- android.properties：android发包配置
- ios.properties：ios发包配置
+ 配置完成后通过命令行进入到tools/appBuilder目录下，调用`ant android`或`ant ios`进行打包

参考资料：
> http://blog.csdn.net/liuhe688/article/details/6679879
> http://blog.csdn.net/a85907468/article/details/27224061
> http://www.cnblogs.com/basenet855x/p/4314166.html