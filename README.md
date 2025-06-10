# Merjenje-razdalje-z-Arduino-ter-ultrazvo-nim-senzorjem
Opis projekta: Merilec razdalje z Arduinom
Ta projekt je enostaven merilec razdalje, ki uporablja ultrazvočni senzor (HC-SR04) za merjenje oddaljenosti predmetov. Merjene vrednosti se prikazujejo na LCD zaslonu, poleg tega pa sistem vključuje tri LED diode (rdeča, rumena in zelena), ki glede na razdaljo vizualno nakazujejo stanje.

Delovanje:
Ultrazvočni senzor meri razdaljo do predmeta pred seboj z oddajanjem zvočnih valov in merjenjem časa odboja.

Na LCD zaslonu se prikazuje trenutna izmerjena razdalja v centimetrih.

LED diode podajajo hitro informacijo o razdalji:

Zelena LED: razdalja je varna 

Rumena LED: razdalja je srednja 

Rdeča LED: predmet je zelo blizu 

# Seznam vseh uporabljenih materialov (kosovnica)

| Št. | Ime                          | Količina | Opis                                           |
|-----|------------------------------|----------|------------------------------------------------|
| 1   | Arduino UNO R3               | 1        | Glavni mikrokontroler                          |
| 2   | HC-SR04 ultrazvočni senzor   | 1        | Merjenje razdalje                              |
| 3   | LCD                          | 1        | Prikaz razdalje                                |
| 4   | LED diode (rdeča, rumena, zelena) | 3        | Vizualna signalizacija                    |
| 5   | Upori (330Ω)                 | 3        | Za LED diode                                   |
| 6   | Ploščica za spajkanje        | 1        | Trajna postavitev vezja                        |
| 7   | Žice                         | več      | Povezovanje komponent                          | 
| 8   | Nadumetna doza               | 1        | Ohišje za zaščito in estetiko                  |
| 9   | Napajanje 5V (USB)           | 1     | Napajanje sistema                                 |


## Komentarji in predlagane izboljšave 
Merilnik je bil testiran z merilnim trakom in kaže zelo natančne vrednosti pri razdaljah med 5 cm in 150 cm. Povprečno odstopanje je bilo manj kot ±1 cm. Pri razdaljah pod 5 cm se lahko pojavijo manjša nihanja zaradi odbojev.  
**Postopek kalibracije** je bil izveden s primerjavo meritev na znani razdalji in po potrebi z dopolnitvijo izračuna razdalje z umeritvenim faktorjem.  
**Predlogi za izboljšave**:
- Dodajanje zvočnega opozorila.
- Merjenje in prikaz povprečne vrednosti za večjo stabilnost.
- Povezava z Bluetooth/ESP modulom za brezžično pošiljanje podatkov.
