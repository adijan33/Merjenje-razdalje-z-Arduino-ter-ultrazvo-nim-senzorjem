#include <LiquidCrystal.h>


LiquidCrystal lcd(2, 3, 4, 9, 8, 7, 10);


const int trigPin = A1;
const int echoPin = A0;


const int greenLED = 11;
const int yellowLED = 12;
const int redLED = 13;

void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  lcd.begin(16, 2);
  lcd.print("Zaganjam...");

  
  for (int i = 0; i < 3; i++) {
    digitalWrite(greenLED, HIGH);
    delay(150);
    digitalWrite(greenLED, LOW);

    digitalWrite(yellowLED, HIGH);
    delay(150);
    digitalWrite(yellowLED, LOW);

    digitalWrite(redLED, HIGH);
    delay(150);
    digitalWrite(redLED, LOW);
  }

  
  digitalWrite(greenLED, HIGH);
  digitalWrite(yellowLED, HIGH);
  digitalWrite(redLED, HIGH);
  delay(300);
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, LOW);

  delay(500);
  lcd.clear();
}

void loop() {
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

 
  long duration = pulseIn(echoPin, HIGH);

  
  float distanceCm = duration * 0.034 / 2;

  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Razdalja:");
  lcd.setCursor(0, 1);
  lcd.print(distanceCm, 1);
  lcd.print(" cm");

  
  if (distanceCm > 50) {
    digitalWrite(greenLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, LOW);
  } else if (distanceCm >= 20 && distanceCm <= 50) {
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, HIGH);
    digitalWrite(redLED, LOW);
  } else if (distanceCm < 20) {
    digitalWrite(greenLED, LOW);
    digitalWrite(yellowLED, LOW);
    digitalWrite(redLED, HIGH);
  }

  delay(200);
}
