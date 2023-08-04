long t =0;
float d = 0;
int trig = 13;
int echo = 12;
void setup() {
//ULTRA SONIC
pinMode (trig , OUTPUT );
pinMode (echo , INPUT );
//LEDS
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
}
void loop() {
digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH);
delayMicroseconds(10);
digitalWrite(trig, LOW);
t = pulseIn(echo, HIGH);
d = (t/2) * 0.0343;
if (d>=0 && d<100)
{digitalWrite(9, HIGH );
digitalWrite( 8 , LOW );
digitalWrite( 7 , LOW );
digitalWrite( 6 , LOW );}
else if ( d>=100 && d<200)
{digitalWrite(8, HIGH );
digitalWrite(9, HIGH );
digitalWrite( 7 , LOW );
digitalWrite( 6 , LOW );}
else if ( d>=200 && d<300)
{digitalWrite(7, HIGH );
digitalWrite(8, HIGH );
digitalWrite(9, HIGH );
digitalWrite( 6 , LOW );}
else if ( d=300 )
{digitalWrite(6, HIGH );
digitalWrite(7, HIGH );
digitalWrite(8, HIGH );
digitalWrite(9, HIGH );}
 else
 {digitalWrite( 9, LOW );
  digitalWrite( 8 , LOW );
  digitalWrite( 7 , LOW );
  digitalWrite( 6 , LOW );
}
}