# [Zmodem](https://github.com/OS-Q/W42)

[![sites](http://182.61.61.133/link/resources/OSQ.png)](http://www.OS-Q.com)

### [Zmodem描述](https://github.com/OS-Q/W42/wiki)

[Zmodem](https://github.com/OS-Q/W42) 改进了Xmodem，它只需要对损坏的块进行重发，其它正确的块不需要发送确认字节。减少通信量。

Zmodem采用了串流式（streaming）传输方式，传输速度较快，而且还具有自动改变区段大小和断点续传、快速错误侦测等功能。这是目前最流行的文件传输协议。

Zmodem协议有两个显着的特点：提供了类似于YMODEM-G的崩溃恢复机制，Zmodem协议不会等待肯定的确认后，每个块被发送，而是快速连续地发送块。 Zmodem协议传输如果因任何原因被取消或中断，恢复后，先前传送的信息都需要重新发送。

### [收录资源](https://github.com/OS-Q/)

* [文档](docs/)
* [工程](project/)
* [工具](software/)

### [OS-Q = Open Solutions | Open Source | Operating System ](http://www.OS-Q.com/Zmodem)
