#include <Arduino.h>
#include <sensors.h>
#include <global.h>

void debug()
{
  //Pressure Sensor Values
  Serial.print("Pressure-PotValue1 = ");
  Serial.print(loPressureValue);
  Serial.print("\n");
  Serial.print("Pressure-PotValue2 = ");
  Serial.print(hiPressureValue);
  Serial.print("\n");
  //DHT Temp 1 and Temp 2 Values
  Serial.print("Temp 1 = ");
  Serial.print(temp1);
  Serial.print("\n");
  Serial.print("Temp2 = ");
  Serial.print(temp2);
  Serial.print("\n");
  //DHT Humidity 1 and Temp 2 Values
  Serial.print("Humidity 1 = ");
  Serial.print(hum1);
  Serial.print("\n");
  Serial.print("Humidity2 = ");
  Serial.print(hum2);
  Serial.print("\n");
  //DS18B20 Temp 3,4,5,6,7,8 Values
  Serial.print("Temp 3 = ");
  Serial.print(temp3);
  Serial.print("\n");
  Serial.print("Temp4 = ");
  Serial.print(temp4);
  Serial.print("\n");
  Serial.print("Temp5 = ");
  Serial.print(temp5);
  Serial.print("\n");
  Serial.print("Temp6 = ");
  Serial.print(temp6);
  Serial.print("\n");
  Serial.print("Temp7 = ");
  Serial.print(temp7);
  Serial.print("\n");
  Serial.print("Temp8 = ");
  Serial.print(temp8);
  Serial.print("\n");
}
