# Clase 05 - 2 de Septiembre

Guiada por Mónica Bate

## Processing
- Programa hermano de Arduino
- heredero de design by numbers
- llevar ámbito de ingeniería al ámbito creativo
- poco más complejo q scratch

#  __________________
- comentarios : //
- cierre ;
- find in reference : ref. en web
- canal Alpha : transparencia/opacidad
- void draw : reiterado hasta stop
- void setup : se define una vez
size (horizntalX, verticalY)
background () : tool color picker : colorMode() antes de bkg
#  __________________
- point : coordenadas
- line : xyinicio, xyfinal : width height computador calcule 
- coordenadas
- xMode : definir inicio de dbujo
- fill(modcolor,canal Alpha)
- rect() : rectángulos o cuadrados
- ellipse() : elipses o círculos
- strokeWeight() : grosor
- translate() : cuántos píxeles se mueve desde la posición 
- original o anterior (de izq a der, arriba a abajo, para otro lado es negativo)
- pushMatrix() : mueve lienzo
- rotate() : rota en función de PI
- popMatrix() : devuelve a antes de pushMatrix
- scale() : escala en relación al origen (homotecia)
- beginShape() : hacer figura vector a vector(puntos)
- vertex() vectores
- endShape(CLOSE) : cierre figura

# __________________


profundidad de color : bits
estándar : 8 bits

### modo/modelo de color
- RGB : red green blue : síntesis aditiva de color
8+8+8
- CMYK : cyan magenta yellow key(black) : síntesis sustractiva de color
8+8+8+8 : cmyk más pesada
- escala de grises : 0=black=off   255=blanco=on
- HSB : hue saturation brightness
- Hexadecimal : códigos
