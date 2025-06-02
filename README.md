# Merjenje-razdalje-z-Arduino-ter-ultrazvo-nim-senzorjem
| Št. | Ime                          | Količina | Opis                                           |
|-----|------------------------------|----------|------------------------------------------------|
| 1   | Arduino UNO R3               | 1        | Glavni mikrokontroler                          |
| 2   | HC-SR04 ultrazvočni senzor   | 1        | Merjenje razdalje                              |
| 3   | LCD 16x2 z I2C vmesnikom     | 1        | Prikaz razdalje                                |
| 4   | LED diode (rdeča, rumena, zelena) | 3        | Vizualna signalizacija                         |
| 5   | Upori (330Ω)                 | 3        | Za LED diode                                   |
| 6   | Ploščica za spajkanje        | 1        | Trajna postavitev vezja                        |
| 7   | Žice                         | več      | Povezovanje komponent                          |
| 8   | Nadumetna doza               | 1        | Ohišje za zaščito in estetiko                  |
| 9   | Napajanje 5V (USB ali baterija) | 1     | Napajanje sistema                              |

## Komentarji in predlagane izboljšave 
Merilnik je bil testiran z merilnim trakom in kaže zelo natančne vrednosti pri razdaljah med 5 cm in 150 cm. Povprečno odstopanje je bilo manj kot ±1 cm. Pri razdaljah pod 5 cm se lahko pojavijo manjša nihanja zaradi odbojev.  
**Postopek kalibracije** je bil izveden s primerjavo meritev na znani razdalji in po potrebi z dopolnitvijo izračuna razdalje z umeritvenim faktorjem.  
**Predlogi za izboljšave**:
- Dodajanje zvočnega opozorila.
- Merjenje in prikaz povprečne vrednosti za večjo stabilnost.
- Povezava z Bluetooth/ESP modulom za brezžično pošiljanje podatkov.
- Arduino koda
cpp
Copy
Edit
#include <LiquidCrystal.h>
 
// LCD: RS, RW, E, D4, D5, D6, D7
LiquidCrystal lcd(2, 3, 4, 9, 8, 7, 10);
 
// Ultrazvočni senzor HC-SR04
const int trigPin = A1;
const int echoPin = A0;
 
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
 
  lcd.begin(16, 2);
  lcd.print("Zaganjam...");
  delay(1000);
  lcd.clear();
}
 
void loop() {
  // Pošlji ultrazvočni impulz
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  // Meri trajanje povratnega signala
  long duration = pulseIn(echoPin, HIGH);
 
  // Izračun razdalje v cm
  float distanceCm = duration * 0.034 / 2;
 
  // Prikaz na LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Razdalja:");
  lcd.setCursor(0, 1);
  lcd.print(distanceCm, 1);
  lcd.print(" cm");
 
  delay(200);
}
