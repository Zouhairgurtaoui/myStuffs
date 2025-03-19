#define swi 7

void setup() {
  Serial.begin(9600);
  pinMode(swi,INPUT);

}

void loop() {
  if(digitalRead(swi) == HIGH){
    Serial.print('0');
  }else if(digitalRead(swi) == LOW){
    Serial.print('1');
  }
  delay(100);

}
