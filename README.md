# [Zmodem](https://github.com/OS-Q/W42)

[![sites](http://182.61.61.133/link/resources/OSQ.png)](http://www.OS-Q.com)

### [Zmodem描述](https://github.com/OS-Q/W42/wiki)

[Zmodem](https://github.com/OS-Q/W42) 是一种在串口通信中广泛使用的异步文件传输协议，由于使用了CRC错误侦测方法，传输的准确率可高达99.6%。分为Zmodem和1k-Zmodem协议两种，前者使用128字节的数据块，后者使用1024字节即1k字节的数据块。

Zmodem采用了串流式（streaming）传输方式，传输速度较快，而且还具有自动改变区段大小和断点续传、快速错误侦测等功能。这是目前最流行的文件传输协议。


在具体的环境中，通过多次采用的xmodem的传输可以发现，不管是直接传输，还是按照网上 的说法采用rz sz传输，都很难将文件正确传输到嵌入式设备上。当采用zmodem进行传输的时候却发现传输的效率很高，几乎没有失败。

Zmodem协议有两个显着的特点：它是非常有效的，它提供了类似于YMODEM-G的崩溃恢复机制，Zmodem协议不会等待肯定的确认后，每个块被发送，而是快速连续地发送块。 Zmodem协议传输如果因任何原因被取消或中断，恢复后，先前传送的信息都需要重新发送。

### [收录资源](https://github.com/OS-Q/)

* [文档](docs/)
* [工程](project/)
* [工具](software/)

### [OS-Q = Open Solutions | Open Source | Operating System ](http://www.OS-Q.com/Zmodem)
