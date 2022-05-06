# Memtester
检测VPS真实可分配内存的小工具，适用于检测VPS超售情况。本程序检测的可分配内存指的是用户使用时最大能占用的内存量。

#使用

```bash
wget https://raw.githubusercontent.com/vpsbash/Memtester/master/memtester
chmod +x memtester
./memtester
```

在进程被杀死前可以测出当时最大的内存占用
