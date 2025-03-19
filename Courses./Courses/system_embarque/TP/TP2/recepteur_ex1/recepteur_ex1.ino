#define led 7

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available()){
    char commande = Serial.read();

    if(commande == '1'){
      digitalWrite(led,HIGH);
    }else if(commande == '0'){
      digitalWrite(led,LOW);
    }
  }

}
