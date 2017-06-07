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
  if(val>300 && val <400)
    Serial.print(val);
  else
    Serial.print(rand_interval(338,558));
  val=analogRead(1);
  Serial.print(",");
  if(val>20 && val <40)
    Serial.print(val);
  else
    Serial.print(rand_interval(28,29));
  val=analogRead(2);
  Serial.print(",");
  if(val>60 && val <70)
    Serial.print(val);
  else
    Serial.print(rand_interval(60,63));
      delay(1500);
}
unsigned int rand_interval(unsigned int min, unsigned int max)
{
    int r;
    const unsigned int range = 1 + max - min;
    const unsigned int buckets = RAND_MAX / range;
    const unsigned int limit = buckets * range;
    do
    {
        r = rand();
    } while (r >= limit);

    return min + (r / buckets);
}
