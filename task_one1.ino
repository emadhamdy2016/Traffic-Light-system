int red = 9;
int yellow = 10;
int green = 11; 
int ON = 1000; 
int OFF = 1000; 
void setup() 
{
pinMode(red, OUTPUT);
pinMode(yellow, OUTPUT);
pinMode(green, OUTPUT);
}
void loop()
{
digitalWrite(red, HIGH); 
delay(ON); 
digitalWrite(red, LOW); 
delay(OFF);
digitalWrite(yellow,HIGH); 
delay(ON); 
digitalWrite(yellow,LOW);
delay(OFF);
digitalWrite(yellow,HIGH); 
delay(ON); 
digitalWrite(yellow,LOW);
delay(OFF);
digitalWrite(yellow,HIGH); 
delay(ON);
digitalWrite(yellow,LOW);
delay(OFF); 
digitalWrite(green, HIGH);
delay(ON);
digitalWrite(green, LOW); 
delay(OFF);
digitalWrite(red, LOW); 
delay(OFF);
digitalWrite(yellow,LOW);
delay(OFF);
digitalWrite(green, LOW); 
delay(OFF);
}