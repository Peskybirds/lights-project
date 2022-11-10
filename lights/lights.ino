// im sorry for who has to read this code i don't like indents so yea and a very quick overview on what this is meant to do
// its meant to flash some pins on and some off and the button does math so it switches mode
int readValue = 0;
int number = 1;
int rannumber = 0;

void setup() {
  // setting all the pins as input or output
pinMode(2,INPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
Serial.begin(9600);

}
void loop() {
Serial.print("HELP");
Serial.println(number);
 

// if button is pressed add 1 onto number
if(number == (1)){
// flipping between 3 lights off and on
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  delay(100);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  delay(100);
  if(digitalRead(2)==HIGH) {
    Serial.print("HELLO");
    Serial.print(" : ");
    Serial.println(number);
    delay(500);
    number += 1;
    Serial.println("ADDED");
   while(digitalRead(2)==HIGH){
    
  }
  }
    }
else if(number == (2)){
  Serial.println("2 called");
 // setting the delay to what analogRead is at
 readValue = analogRead(A0);
 Serial.println(readValue);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  delay(readValue);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  delay(readValue);
  if(digitalRead(2)==HIGH) {
  delay(500);
    number += 1;
  while(digitalRead(2)==HIGH){
    
}
  }
}

else if(number == (3)){
  Serial.println("3 called");
  rannumber = random(10, 1000);
 digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  delay(rannumber);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  delay(rannumber);
  if(digitalRead(2)==HIGH) {
    delay(500);
    number += 1;
  while(digitalRead(2)==HIGH){
  
}
  }

}
 else if(number >= (4)){
  Serial.println("4 called");
number = 1;
}
}
