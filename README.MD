###工程创建流程：
1. 创建web工程：`egret create puzzle [--type game]`
2. 创建ios工程：`egret create_app puzzle-ios -f puzzle -t egret-ios-support-3.1.3`

###目录结构：
- egret-ios-support-3.1.3：ios打包工具，v3.1.3
- puzzle：web工程目录
- puzzle-ios：ios工程目录

对h5代码修改后调用`egret build puzzle --runtime native -e`，将修改后的内容编译到ios工程中