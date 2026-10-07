# Clase 09 - 7 de octubre
Usaremos pantalla oled en [wokwi](wowki.com)
### Formas de comunicación
|         | in                                                                                                                        | out                                                                                                                                          |   |   |
|---------|---------------------------------------------------------------------------------------------------------------------------|----------------------------------------------------------------------------------------------------------------------------------------------|---|---|
| analog  | analogRead(numeroPinA); por ejemplo: potenciometro, LDR valores posible: 0 - 1023 funcionan en pines analog in (A0 al A5) | analogWrite(numeroPin, valor); leds con intensidad intermedia valor posible: 0 - 255 funcionan en CIERTOS pines digitales (~): 3,5,6,9,10,11 |   |   |
| digital | digitalRead(númeroPin); por ejemplo: botones funcionan en pines digitales (Del 0 al 13)                                   | digitalWrite(numeroPin, variable); por ejemplo: luces on/off funcionan en pines digitales (Del 0 al 13)                                      |   |   |
|         |                                                                                                                           |                                                                                                                                              |   |   |
______________________
## estructuras:
- Variables
- 
- Clase: instancia, atributo, función

ej Clase:
arduino > tools> serial monitor \
Serial.begin(9600) -> baud rate\
loop: Serial.print() \
decirle al computador lo q va a hacer

## encargo
- buscar e investigar un sensor y un actuador en [afel](afel.cl)
- llevar cables tipo caimán