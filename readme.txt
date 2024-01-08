test for git submodule

我发现当创建一个新的工作台，再clone一份代码，.submodule变得无效了。
在进行git submodule init之后会变得无效。

git submodule add url 就可以添加子模块到当前仓库中
这样执行git submodule init 就可以初始化
之后需要执行：git submodule update --init 这样就可以获得子模块的内容

该仓库，作为一个子仓库，用于其它项目；
