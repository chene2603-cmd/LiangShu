#!/bin/bash

# 创建目录结构
mkdir -p digital-temple/{quantum/{include,src},python,examples,config}

# 创建文件
for file in "${FILES[@]}"; do
    touch "digital-temple/$file"
done

# 复制内容到各个文件
# ... 这里可以添加将上述内容写入对应文件的命令 ...

echo "项目结构创建完成！"