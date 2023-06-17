## What am I doing?

NEMU 是一个用来执行客户程序的程序。

在 [monitor.c](../nemu/src/monitor/monitor.c) 中查看 init_monitor() 函数。

看起来这玩意会接受命令行参数呢！

monitor 会调用 init_isa() 函数，在 isa 下的 init.c 中。他会进行一些 isa 相关的初始化工作。

- 读入客户程序。将内置的客户程序读入到内存中。
    - 客户程序是 isa 相关的。
    - 内存是用字节数组模拟的。
    - 读取到 [RESET_VECTOR](../nemu/include/memory/paddr.h)
