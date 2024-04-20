int ledpin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);  //sets the digital pin as output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledpin, HIGH);  //turns the led on
  delay(1000);                 //wait second
  digitalWrite(ledpin, LOW);   //turns  the led off
  delay(1000);
}
