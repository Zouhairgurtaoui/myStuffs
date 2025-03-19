int pot = A0;
int val = 0;
uint8_t l1 = 5;
uint8_t l2 = 6;


void setup() {
  // put your setup code here, to run once:
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(pot,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(pot);
  Serial.println(val);
  if (val < 500){
    digitalWrite(l1,HIGH);
    digitalWrite(l2,LOW);
  }else{
    
    digitalWrite(l1,LOW);
    digitalWrite(l2,HIGH);
  }
   delay(500);    
 

}
