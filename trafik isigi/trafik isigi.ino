#define green 8
#define yellow 9
#define red 10

void setup() {
      pinMode(red, OUTPUT);
      pinMode(yellow, OUTPUT);
      pinMode(green, OUTPUT);

}

void loop() {

  digitalWrite(red,HIGH);
    delay(10000); 
  digitalWrite(yellow,HIGH);
    delay(3000);
  digitalWrite(red, LOW);

  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
    delay(5000);
  digitalWrite(green,LOW);
  digitalWrite(yellow,HIGH);
  delay(3000);
  digitalWrite(yellow,LOW);


}
