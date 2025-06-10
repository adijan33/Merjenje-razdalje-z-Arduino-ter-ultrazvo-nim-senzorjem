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


![slika vezja](https://github.com/user-attachments/assets/43f65ffb-3b6e-45c5-ad7f-28f546a10261)


# Komentar na osnovi meritev in odstopanj:
Naša merilna naprava, ki temelji na Arduinu in ultrazvočnem senzorju, je pokazala relativno dobro natančnost, predvsem pri krajših razdaljah.

1. Natančnost meritev:
Naprava ohranja relativno nizko napako (pod 1 %) pri razdaljah do približno 100 cm, kar je zelo dobro glede na naravo ultrazvočnih senzorjev.

Pri večjih razdaljah (nad 150 cm) se relativna napaka opazno povečuje, kar je običajno pri cenejših ultrazvočnih senzorjih zaradi oslabitve odboja signala in širjenja zvočnega stožca.

Največja absolutna napaka je bila 6.2 cm, kar se je zgodilo pri razdalji 250 cm (2.5 % relativne napake), kar je še vedno znotraj razumne tolerance za tak tip senzorja.

2. Natančnost senzorja:
Meja napake se z večanjem razdalje povečuje, kar kaže na rahlo nenatančnost senzorja pri daljših razdaljah.

3. Ocena delovanja naprave:
Merilni sistem je za prototipno ali izobraževalno rabo zelo uspešen.

Naprava izkazuje dobro linearno odzivnost in relativno stabilnost pri merjenju, z izjemo skrajnih merilnih vrednosti, kjer je potrebno računati z večjo negotovostjo.





