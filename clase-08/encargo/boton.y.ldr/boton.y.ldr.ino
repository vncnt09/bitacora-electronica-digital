int pinBoton = 2;
bool estadoBoton = 0;

int pinLed = 9; 

int pinLDR = A0;      
int valorLDR = 0;

int valorLed = 0;    

void setup()
{
  pinMode(pinBoton, INPUT);
  pinMode(pinLed, OUTPUT);
}

void loop()
{
  estadoBoton = digitalRead(pinBoton);

  if (estadoBoton == HIGH) {

    valorLDR = analogRead(pinLDR) / 4;  
    valorLed = 255 - valorLDR;          
    analogWrite(pinLed, valorLed);
  }
 

  delay(100);
}
