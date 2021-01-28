int led = 6;
int led2 = 4;
int switch1 = 2;
int switch2 = 3;
int buttonState;
int buttonState2;
void setup() {
  //Serial.begin(9600);
  pinMode(led,OUTPUT); //pin als output
  pinMode(led2,OUTPUT);
  pinMode(switch1, INPUT);
  pinMode(switch2, INPUT);
} 

void loop() {
  buttonState = digitalRead(switch1);
  buttonState2 = digitalRead(switch2);
  
 if (buttonState == LOW)
 {
  digitalWrite(led, HIGH);
  digitalWrite(led2 ,LOW);
 }
 
 if (buttonState2 == LOW)
 {
  digitalWrite(led2, HIGH);
  digitalWrite(led, LOW);
 }
 
}
