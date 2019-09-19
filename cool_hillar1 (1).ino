// Práctica encender y apagar dos LED
const int LED1=13;
const int LED2=12;
const int LED3=11;
void setup()
{
pinMode(LED1,OUTPUT);
pinMode(LED2,OUTPUT);
}
void loop()
{
digitalWrite(LED1,HIGH);
delay(500);
digitalWrite(LED1,LOW);
digitalWrite(LED2,HIGH);
delay(500);
digitalWrite(LED2,LOW);
digitalWrite(LED3,HIGH);
delay(500);
digitalWrite(LED3,LOW);
}