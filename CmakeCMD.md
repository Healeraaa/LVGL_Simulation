# 构建清理与重新生成流程

以下命令将删除现有的构建目录并重新创建一个新的构建目录，然后运行 `cmake` 和 `make` 来重新生成项目。

```bash
rm -rf build  # 删除现有的构建目录
mkdir build   # 创建新的构建目录
cd build      # 进入构建目录
cmake ..      # 配置项目
make          # 构建项目

