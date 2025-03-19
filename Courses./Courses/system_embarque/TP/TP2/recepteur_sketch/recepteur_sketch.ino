#define led1 5
#define led2 4
#define led3 7

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {

    String commande = Serial.readStringUntil('\n'); 
    

    
    if (commande.length() == 6) { // Expecting exactly "100111" or similar
      String s1 = commande.substring(0, 2);
      String s2 = commande.substring(2, 4);
      String s3 = commande.substring(4, 6);
    }
    if (commande.equals("10")) {
      digitalWrite(led1, HIGH);
    } else if (commande == "00") {
      digitalWrite(led1, LOW);
    }

    if (commande.equals("11")) {
      digitalWrite(led2, HIGH);
    } else if (commande.equals("01") ){
      digitalWrite(led2, LOW);
    }

    if (commande.equals("111")) {
      digitalWrite(led3, HIGH);
    } else if (commande.equals("011")) {
      digitalWrite(led3, LOW);
    }

    
  }
  
}
