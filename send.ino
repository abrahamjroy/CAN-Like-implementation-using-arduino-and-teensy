#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#define DHTPIN            4         
#define DHTTYPE           DHT11
DHT_Unified dht(DHTPIN, DHTTYPE);
int tem,hum,co;
void setup()
{
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
}
void loop()
{
  sensors_event_t event;
  co= analogRead(5);  
  dht.temperature().getEvent(&event);
  analogWrite(2,event.temperature);
  Serial.println(event.temperature);
  dht.humidity().getEvent(&event);
  analogWrite(3,event.relative_humidity);
  Serial.println(event.relative_humidity);
  analogWrite(6,co);
  Serial.println(co);
  delay(500);
}

