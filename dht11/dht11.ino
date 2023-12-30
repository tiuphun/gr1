#include "DHT.h"           
 
const int DHTPIN = 4;       //Đọc dữ liệu từ DHT11 ở chân 4 trên mạch Arduino
const int DHTTYPE = DHT11;  //Khai báo loại cảm biến, có 2 loại là DHT11 và DHT22
 
DHT dht(DHTPIN, DHTTYPE);
 
void setup() {
  Serial.begin(9600);
  dht.begin();         
}
 
void loop() {
  float h = dht.readHumidity();    
  float t = dht.readTemperature(); 
  
  Serial.print("Temperature: ");
  Serial.println(t);               
  Serial.print("Humidity: ");
  Serial.println(h);               
  
  Serial.println();                
  delay(1000);
}