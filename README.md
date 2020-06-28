# SEU-compilers-project
## 简介

本项目是东南大学大三编译原理课程设计。我作为三个贡献者之一，负责yacc模块的全部实现：
1. 对yacc输入文件的解析
2. 求解First集
3. LR1文法下推自动机与分析表的构造
4. LALR1下推自动机与分析表的构造
5. 文法分析程序的生成


## 使用说明

```bash
compilers-project.exe A B C

A: lex输入文件目录
B: yacc输入文件目录
C: 源代码输入文件目录

生成的lex.yy.c和yac.tab.c缺省为当前工作目录
```
