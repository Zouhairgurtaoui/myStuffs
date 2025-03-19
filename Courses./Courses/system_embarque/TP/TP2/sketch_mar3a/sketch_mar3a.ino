#define swi1 5
#define swi2 4
#define swi3 7

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(swi1,INPUT);
  pinMode(swi2,INPUT);
  pinMode(swi3,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(digitalRead(swi1) == HIGH){
    Serial.print("10");
    delay(500);
  }else if(digitalRead(swi1) == LOW){
    Serial.print("00");
    delay(500);
  }

  if(digitalRead(swi2) == HIGH){
    Serial.print("11");
    delay(500);
  }else if(digitalRead(swi2) == LOW){
    Serial.print("01");
    delay(500);
  }

  if(digitalRead(swi3) == HIGH){
    Serial.print("111");
    delay(500);
  }else if(digitalRead(swi3) == LOW){
    Serial.print("011");
    delay(500);
  }
  

}
