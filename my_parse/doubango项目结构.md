##tinyWRAP
  c++代码，对c代码以面向对象的方式进行封装，提供给上层调用

##tinyDAV
   Doubango媒体音频/视频控制，tinyMedia核心框架

- audio 音频
- codecs 编解码器
- msrp 文件传输
- video 视频

##tinySIP
 SIP/SIM栈（用户网络接口）

##tinyMEDIA
  核心框架（音视频）

##tinyXCAP
  XML配置访问协议，一种应用层协议，它允许一个客户端来读，写，修改和删除应用程序配置存储在服务器上的XML的数据.Depends on tinySAK, tinyNET and tinyHTTP
- AUID manager
- URL generator

##tinySMS
  存储和转发服务，短消息并不是直接从发送人发送到接收人，而始终通过 SMS 中心进行转发。如果接收人处于未连接状态，则消息将在接收人再次连接时发送，Depends on tinySAK

##tinySIGCOMP 
 信令压缩，Dependson tinySAK


- Stream and Dgramcompression/decompression

- SIP/SDP and Presence dictionaries

- Deflate Compressor

##tinyHTTP 
 http协议，Depends ontinySAK and tinyNET

- Digest/Basic Authentication 数字/基础认
- Pipelining 管道(管线)技术
- CONNECT, DELETE, GET, HEAD, OPTIONS,PATCH, POST, PUT and TRACE (基本的网络处理：连接，删除连接 GET/HEAD/POST请求 网络请求参数，patch, put, trace)

##tinyMSRP 
传文件的一个协议

- Large Message IM（非常大的文本及时消息）
- File Transfer
- Image Sharing

##tinyIPSec
对IP协议的分组进行加密和认证来保护IP协议的网络传输协议族，Depends on tinySAK

##tinyRTP
实时传输协议

##tinySDP
会话描述协议

##tinyNET
网络传输层，Dependson tinySAK

- IPv4/IPv6 Sockets (UDP, TCP, TLS andSCTP) IPv4/IPv6 Sockets解析
- DHCPv4/v6  DHCPv4/v6解析
- DNS解析
- NAT穿透

##tinySAK
C代码一些模板方法

- String utility functions( 字符处理函数工具集)
- Memory management(内存管理)
- Dynamic buffers(动态缓存
- Threading( 线程)
- Runnable (Runnable接口)
- Timers(时间片控制)
- Final State Machine (FSM) manager(状态机)
- Base64 encoder/decoder( Base64 编码与解码)
- UUID generator (UUID 生成器)
- CRC32 and CRC16 (16位和32为循环冗余校验)
- URL encoder/decoder (URL 编码和解码)
- SHA-1, MD5, HMAC-MD5, HMAC-SHA-1(加密)
