  int val;
  void setup()
  {
    Serial.begin(9600);
    pinMode(0,INPUT);
    pinMode(1,INPUT);
  }
void loop()
{
  Serial.println("");  
  val=analogRead(0);
    Serial.print(val);
  val=analogRead(1);
  Serial.print(",");
    Serial.print(val);
  val=analogRead(2);
  Serial.print(",");
    Serial.print(val);
      delay(1500);
}

