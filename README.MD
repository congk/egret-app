该示例中使用到了[Apache Ant](http://ant.apache.org)工具，请提前下载安装

---

###工程创建流程：

1. 创建web工程：`egret create puzzle [--type game]`
2. 创建ios工程：`egret create_app puzzle_ios -f puzzle -t tools/egret-ios-support`
3. 创建android工程：`egret create_app puzzle_android -f puzzle -t tools/egret-android-support`

---

###目录结构：

- puzzle：h5工程目录
- puzzle_ios：ios工程目录
- puzzle_android：android工程目录
- server：本地静态文件服务器，用来为app提供runtime（包含app）热更新测试入口
- egret-ios-support：ios打包工具，本例中使用的版本为3.1.3
- egret-android-support：android打包工具，本例中使用的版本为3.1.3
- build.properties：工程基本配置
- android.properties：安卓打包配置
- ios.properties：ios打包配置
- build.xml：ant打包配置，封装了`android`与`ios`两个任务

对h5代码修改后调用`egret build puzzle --runtime native -e`，将修改后的内容同步到ios及android工程中

---

###发布ios及android包
1. 调用`egret publish puzzle --runtime navie -e`打包native项目，此时android与ios工程中的资源会被同步为正式版资源
2. 修改文件夹内的三个.properties文件：
	- build.properties：项目基本配置
	- android.properties：android发包配置
	- ios.properties：ios发包配置
3. 命令行调用`ant android`或`ant ios`进行打包，最终会在该目录下生成.apk或.ipa文件

**注意：build.properties中`name`值请勿使用中文，否则可能因编码问题导致app无法正常运行（该情况在android中被发现，ios未知）**

---

###安卓热更新测试：
1. 修改android工程的java入口类，修改`setLoaderUrl(0)`为`setLoaderUrl(1)`
2. 修改`setLoaderUrl`方法中的`case 1`分支逻辑，使`loaderUrl`值赋值为本地服务中提供的runtime入口，此例中为`http://10.0.11.44:8080/config.json`
3. 修改config.json文件中的**loaderUrl**与**updateUrl**值，该文件为runtime入口配置文件，参考[egret官网说明](http://open.egret.com/Wiki?mid=2&cid=11)
4. 启动本地测试服务，进入到egret-app/server目录，命令行调用：`node index`

参考资料：
> 1. http://blog.csdn.net/liuhe688/article/details/6679879
> 2. http://blog.csdn.net/a85907468/article/details/27224061
> 3. http://www.cnblogs.com/basenet855x/p/4314166.html

---
如果您有任何的建议，请联系我：kongcong@egret.com | 363959579@qq.com
