#define led1 5
#define led2 6
#define led3 7

void setup() {

  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);

}

void loop() {
  
  if(Serial.available()){
    int states = Serial.read();
    if((states & 0b001)){
      digitalWrite(led1,HIGH);
    }else if((states & 0b001) == 0){
      digitalWrite(led1,LOW);
    }
    if(states & 0b010){
      digitalWrite(led2,HIGH);
    }else if((states & 0b010) == 0){
      digitalWrite(led2,LOW);
    }
    if(states & 0b100){
      digitalWrite(led3,HIGH);
    }else if((states & 0b100) == 0){
      digitalWrite(led3,LOW);
    }
  }
  

}
