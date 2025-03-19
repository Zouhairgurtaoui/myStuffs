#define swi1 5
#define swi2 6
#define swi3 7


void setup() {
  
  Serial.begin(9600);
  pinMode(swi1,INPUT);
  pinMode(swi2,INPUT);
  pinMode(swi3,INPUT);

}

void loop() {
  
  Serial.write(digitalRead(swi1) | digitalRead(swi2) << 1 | digitalRead(swi3) << 2);
  
  delay(200);
  

}
