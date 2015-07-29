void setup() {
  Serial.begin(9600);
}
 
void loop()
{
  int a = 0;
  for (int i=0;i<10; i++)
  {
    a = a + digitalRead(9);
  }
  Serial.print("A");
  Serial.println(a);
delay(1000);
}



/*void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float a = digitalRead(7);
  if(1)
  {
    Serial.print("A");
    Serial.println(a);
    /*tone(8, 523, 300);*/
    /*delay(1000);
  }
  if(analogRead(A1)<2)
  {
    Serial.println("B");
    /*tone(8, 523, 300);*/
  /*  delay(1000);
  }
}
*/



