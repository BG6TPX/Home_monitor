# Home_monitor

## 目的/背景：

    学习TCP/IP网络协议栈的开源项目，主要场景是在家里没人或房屋装修入住前，实时监测家里的环境情况，以防意外发生

## 项目功能

## 硬件组成

![image](https://github.com/BG6TPX/Home_monitor/blob/master/Hardware/Layout.png)

**硬件整体布局**

### 1.电源部分

采用2种供电方式

1. TypeC接口，5V直接输入供电
2. 板载锂电池直接3.7V供电

### 2.通信

1. ESP32有USB协议栈，可以直接通过USB进行OTA更新
2. 板载W5500 ETH，可以直接通过ETH进行OTA更新
3. 板载ESP32，可以直接通过WIFI进行OTA更新

### 3.传感器采集

1. 转接板上搭载温湿度传感器
2. 转接板上搭载的IMU 9轴传感器可以直接获取
3. 板载的GPS模块可以直接获取定位传输本地坐标
4. 板载Cat1模块 可以直接进行定位

### 4.控制

1. 板载的LED可以直接用来PID控制

## 软件模块实现

1.网络协议

2.传感器采集

3.下位机控制


### 软件整体OS

1.FreeRTOS
