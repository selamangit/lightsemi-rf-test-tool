# lightsemi_射频测试工具

开发环境：

* IDE：CLion
* 编译器：gcc/g++
* Qt版本：5.14.2

### 开发计划

- [x] 开发射频小工具Qt界面
- [x] 串口通信：wifi数据
  - [x] 选择参数发送测试指令
  - [x] 多线程读写数据

- [x] 串口通信：蓝牙数据
  - [x] 解析蓝牙数据
  - [x] 多线程读写数据

- [x] 实现TX/RX测试功能
- [x] 优化界面
  - [x] wifi和蓝牙的界面分界
  - [x] 图标更换、标题版本号
  - [x] 增加一个串口状态栏
  - [x] 菜单栏添加一个about，显示文字提示操作步骤
  - [x] 改善tabWidget随拖动而改变的问题
  - [x] 拖拉界面框时，缩小到一定程度就不要再缩小了
  - [x] 了解Qt多线程编程，优化textBrowser
  - [x] 在界面上删除停止位、校验位、流控制的Combobox

- [x] 串口稳定性功能
  - [x] 刷新PC串口
  - [x] 解决插拔问题

- [ ] 软件测试

### 效果图

![image-20220917111310077](https://raw.githubusercontent.com/selamangit/GithubPic/main/202209171113398.png)
