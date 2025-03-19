#define CAPT_LM35 A0
#define LED_G 5
#define LED_R 6

int van;
float tension,temp;

void setup() {
  pinMode(CAPT_LM35,INPUT);
  pinMode(LED_G,OUTPUT);
  pinMode(LED_R,OUTPUT);

}

void loop() {
  van = analogRead(CAPT_LM35);
  tension = (van * 5.0)/1023.0;
  temp = tension * 100.0;

  if(temp >= 10.0 && temp <= 50.0){
    digitalWrite(LED_G,HIGH);
    digitalWrite(LED_R,LOW);
  }else{
    digitalWrite(LED_R,HIGH);
    digitalWrite(LED_G,LOW);
  }

}
