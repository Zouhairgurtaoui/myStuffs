#define CAPT_LM35 A0
int van;
float tension,temp;
void setup() {

  Serial.begin(9600);
  pinMode(CAPT_LM35,INPUT);

}

void loop() {
  van = analogRead(CAPT_LM35);
  tension = (van * 5.0)/1023.0;
  temp = tension * 100.0;

  Serial.print("La valeur lue est : ");
  Serial.println(van);
  Serial.print("Temperateur : ");
  Serial.print(temp);
  Serial.println(" C");

  delay(1000);

}
