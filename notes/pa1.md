## What am I doing?

NEMU 是一个用来执行客户程序的程序。

在 [monitor.c](../nemu/src/monitor/monitor.c) 中查看 init_monitor() 函数。

看起来这玩意会接受命令行参数呢！

monitor 会调用 init_isa() 函数，在 isa 下的 init.c 中。他会进行一些 isa 相关的初始化工作。

- 读入客户程序。将内置的客户程序读入到内存中。
    - 客户程序是 isa 相关的。
    - 内存是用字节数组模拟的。
    - 读取到 [RESET_VECTOR](../nemu/include/memory/paddr.h)

## WTF

仓库默认的文件夹结构有问题，还少文件.. 真无语啦，让我去另一个分支找了找大概的文件夹结构。

## x86 寄存器模拟

我超，这个怎么这么怪啊，还要在 isa-def.h 中自己实现。

还要自己看 reg.h. 看起来怎么是用数组实现的啊，好怪啊，跟其他架构的实现很不一样（其他架构有现成的 isa-def.h）。

## 匿名 union

https://www.cnblogs.com/guozqzzu/p/3626893.html

什么玩意我怎么感觉不像是匿名 union.

好了我会了！匿名 union 可以让一块地址拥有不同的叫法！而匿名 struct 可以让一些变量 100% 连在一起。

## 后续

我可能已经写好了，但是 nju ics2022 分支对 x86 的分支支持炸裂了。还是用难度低的那个什么架构吧。

riscv64.


