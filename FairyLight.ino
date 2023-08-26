const int pinSeven = 7;
const int pinSix = 6;
const int pinFive = 5;

void setup() {

  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop() {
  digitalWrite(pinSeven, HIGH);
  delay(50);
  digitalWrite(pinSix, HIGH);
  delay(50);
  digitalWrite(pinFive, HIGH);
  delay(50);
  
  digitalWrite(pinSeven, LOW);
  digitalWrite(pinSix, LOW);
  digitalWrite(pinFive, LOW);
  delay(50);
  
}
