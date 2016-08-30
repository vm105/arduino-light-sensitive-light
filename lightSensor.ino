/**
 * Created on October 2015
 * by Varun Malhotra
 */

int sig = 0;
int vcc = 3;
int led1 = 5;
int led2 = 6;
int led3 = 9;
//int ledAnlg = 8;
 
void setup() {
  // put your setup code here, to run once:
analogReference(DEFAULT);  
Serial.begin(9600);
pinMode(vcc, OUTPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(vcc, HIGH);
int value = analogRead(sig);
Serial.println(value);
delay(500);
//constrain(value, 38, 170);
//int val = value;
//constrain(val, 50, 170);
//val = map(val, 50, 170, 255, 0);
//analogWrite(ledAnlg, val);

  if (value < 5) {
    digitalWrite(led1,HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
  } else {
    digitalWrite(led1,LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);

  }
}


