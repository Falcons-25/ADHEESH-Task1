int trig=8;
int echo=9;
long duration;
double lengthIncm;
void setup() {
  Serial.begin(9600);
  pinMode(8,OUTPUT);
  pinMode(9,INPUT);
  
}

void loop() {
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  lengthIncm=duration/58 ;
  lengthIncm*=0.03;
  Serial.print(lengthIncm);
  Serial.print(',');
  Serial.println(millis()*0.001);
  delay(1000);
}