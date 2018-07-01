# SDS011  
  
Arduino library for dust Sensor SDS011 (Nova Fitness Co.,Ltd)  
This library uses SoftSerial to connect to the SDS011.  
  
## Usage
  
* Define SDS object:  
i.e. SDS011 mySDS;  
  
* Start object:  
void begin(pinRX,pinTX);  
i.e. mySDS.begin(pinRX,pinTX);  
  
* Read values:  
int read(float *p25, float *p10);  
i.e. error = mySDS(&pm25,&pm10);  
  
Reads the PM2.5 and PM10 values, return code is 0, if new values were read, and 1 if there were no new values.  
  
  
