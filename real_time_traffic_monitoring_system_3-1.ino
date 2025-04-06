int r1=13;
int y1=2;
int g1=3;
int r2=4;
int y2=5;
int g2=6;
int r3=7;
int y3=8;
int g3=9;
int r4=10;
int y4=11;
int g4=12;
int isobstacle=LOW;
int obstacle_pin1=A2;
int obstacle_pin2=A3;
        

int obstacle_pin3=A4;
int obstacle_pin4=A5;
void setup() {
  // put your setup code here, to run once:
pinMode (r1,OUTPUT);
pinMode (y1,OUTPUT);
pinMode (g1,OUTPUT);
pinMode (r2,OUTPUT);
pinMode (y2,OUTPUT);
pinMode (g2,OUTPUT);
pinMode (r3,OUTPUT);
pinMode (y3,OUTPUT);
pinMode (g3,OUTPUT);
pinMode (r4,OUTPUT);
pinMode (y4,OUTPUT);
pinMode (g4,OUTPUT);
pinMode(obstacle_pin1,INPUT);
pinMode(obstacle_pin2,INPUT);
pinMode(obstacle_pin3,INPUT);
pinMode(obstacle_pin4,INPUT);

}void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(g1,HIGH);
digitalWrite(r2,HIGH);
digitalWrite(r3,HIGH);
digitalWrite(r4,HIGH);
isobstacle=digitalRead(obstacle_pin1);
   if(isobstacle==HIGH)
   {
    Serial.println("1");
    delay(1000);
   }
   else{
    Serial.println("0");
    delay(500);
   }
 

  digitalWrite(y1,HIGH);
   digitalWrite(g1,LOW);
   delay(200);
   digitalWrite(y1,LOW);
   digitalWrite(r1,HIGH);
   delay(200);
   digitalWrite(g2,HIGH);
   digitalWrite(r2,LOW);
   delay(200);
   isobstacle=digitalRead(obstacle_pin2);
     if(isobstacle==HIGH)
     {
      Serial.println("1");
    delay(1000);
     }
     else
     {
        Serial.println("0");
        delay(500);
      }
digitalWrite(y2,HIGH);
   digitalWrite(g2,LOW);
   delay(200);
   digitalWrite(y2,LOW);
   digitalWrite(r2,HIGH);
   delay(200);
   digitalWrite(g3,HIGH);
   digitalWrite(r3,LOW);
   delay(200);
   isobstacle=digitalRead(obstacle_pin3);
      if(isobstacle==HIGH)
      {
        Serial.println("1");
        delay(1000); 
      }
     
 else{
        Serial.println("0");
        delay(500);
      }
      digitalWrite(y3,HIGH);
   digitalWrite(g3,LOW);
   delay(200);
   digitalWrite(y3,LOW);
   digitalWrite(r3,HIGH);
   delay(200);
   digitalWrite(g4,HIGH);
   digitalWrite(r4,LOW);
   delay(200);

   isobstacle=digitalRead(obstacle_pin4);
      if(isobstacle==HIGH)
      {
        Serial.println("1");
        delay(1000); 
      }
 else{
        Serial.println("0");
        delay(500);
      }
      digitalWrite(y4,HIGH);
   digitalWrite(g4,LOW);
   delay(200);
   digitalWrite(y4,LOW);
   digitalWrite(r4,HIGH);
   delay(200);
   digitalWrite(r1,HIGH);
   delay(200);
}
