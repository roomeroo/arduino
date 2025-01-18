int ledRojo = 8;
int ledAmarillo = 9;
int ledVerde = 10;

void setup() {
  
  pinMode(ledRojo,OUTPUT);
  pinMode(ledAmarillo,OUTPUT);
  pinMode(ledVerde,OUTPUT);

}

void loop() {

  digitalWrite(ledRojo, HIGH);
  delay(2000);
  digitalWrite(ledRojo,LOW);
  delay(500);

  digitalWrite(ledAmarillo, HIGH);
  delay(2000);
  digitalWrite(ledAmarillo,LOW);
  delay(500);

  digitalWrite(ledVerde, HIGH);
  delay(2000);
  digitalWrite(ledVerde,LOW);
  delay(500);

}
