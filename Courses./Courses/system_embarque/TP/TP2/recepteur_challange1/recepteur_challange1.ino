#define led 4

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);

}

void loop() {

  if(Serial.available()){
    char commande = Serial.read();
    if(commande == '1'){
      digitalWrite(led,HIGH);
    }else if(commande == '0'){
      digitalWrite(led,LOW);
    }
  }
  

}
