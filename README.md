Arduino example for the GY39 sensor

I use ESP32 to connet with GY39 sensor, 

all the example base on Arduino and EPS32.

the pin connetiong as below:
--------------
VCC ->  3.3V

GND ->  G

SDA ->  pin21

SCL ->  pin22

--------------
when using I2C, you need to connet "S０" and "G".


# GY39

GY-39 Serial MAX44009 Light Intensity BME280 Temperature And Humidity Atmospheric Pressure Sensor Module

GY-39 light intensity temperature and humidity atmospheric pressure sensor module, direct serial port output
1, can be used as a simple MAX44009 or BME280 module, chip I2C communication
2, you can read all kinds of data on the module MCU, MCU calculation of the unified direct output of the calculation
of the practical data, support for serial /i2c
3, you can connect the Android mobile phone or UTB to TTL module connected to the computer via bluetooth module,
Data analysis of computer software
Name: 4 in 1 weather station module(light intensity + temperature and humidity + atmospheric pressure module)
Model: GY-39
Using chip: MAX44009+BME280+MCU
Power supply: 3-5v
Module size: 24.3*26.7mm
Communication mode:MCU_IIC/MCU_Serial / sensor chip IIC bus

Introduction:

GY-39 is a low cost, air pressure, temperature and humidity, light intensity sensor module. The working voltage is 3-5V. The power consumption is small, and the installation is convenient. The working principle is that the MCU collects various sensor data, performs unified processing, and directly outputs the calculated result. This module has two ways to read data, namely serial UART (TTL level) or IIC (2 line). The baud rate of the serial port is 9600bps and 115200bps, configurable, continuous, and two output modes are requested, and the settings can be saved after power down. It can adapt to different working environments, and connect with single-chip computer and computer. The module can also set a separate sensor chip operating mode. As a separate sensor module, the MCU does not participate in data processing. Provide , 51, stm32 MCU communication program, does not provide schematic and internal MCU source code. This GY39 module also gives Android mobile phone software app to view data, and supports wifi LAN connection, mobile phone and computer display data at the same time.

Features:

1. High cost performance
2. Built-in MCU to calculate sensor data
3. IIC, serial communication format
4. Unified data output
5. With the corresponding PC software

Application:

1. Digital lighting management
2. Internet of Things, smart home applications
3. Weather station monitoring
4. Digital lighting design
5. Digital barometer, altimeter
6. Thermometer
7. Greenhouse climate monitoring
