|# codigo hasta ahora 

``` 
#include <Adafruit_NeoPixel.h>

#define PIN        6
#define NUMPIXELS  64
#define SERPENTINA false   // true si tu matriz zigzaguea por filas

int potPin = A5;
int valorPot = 0;
int intensidadLuz = 0;

// tiempo para dot y entre simbolos
int corto = 240;

// tiempo para lines y entre letras
int largo = 240 * 3;


Adafruit_NeoPixel strip(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int indice(int fila, int col) {
  if (SERPENTINA && (fila % 2 == 1)) col = 7 - col;
  return fila * 8 + col;
}

void rect(int f0, int c0, int alto, int ancho, uint32_t color) {
  for (int f = f0; f < f0 + alto; f++)
    for (int c = c0; c < c0 + ancho; c++)
      strip.setPixelColor(indice(f, c), color);
}

// añadido por claude
// color escalado por el brillo actual del potenciómetro
uint32_t luz(uint8_t r, uint8_t g, uint8_t b) {
  return strip.Color((uint32_t)r * intensidadLuz / 255,
                     (uint32_t)g * intensidadLuz / 255,
                     (uint32_t)b * intensidadLuz / 255);
}

// reemplazo de delay(): mientras espera, sigue leyendo el potenciómetro
void wait(unsigned long ms) {
  unsigned long inicio = millis();
  while (millis() - inicio < ms) {
    valorPot = analogRead(potPin);
    intensidadLuz = map(valorPot, 0, 1023, 2, 127);
  }
}


void setup() {
  strip.begin();
  intensidadLuz = map(analogRead(potPin), 0, 1023, 2, 127);
  strip.clear();
}

void loop() {
  
 // start
lluviaSuave();

  s(); o(); m(); e(); t(); i(); m(); e(); s(); //sometimes
  barrido();
  
  i(); g(); n(); o(); r(); a(); n(); c(); e(); //ignorance
  barrido();
  
  i(); s(); //is
  barrido();
  
  e(); v(); e(); n(); //even
  barrido();

  h(); a(); r(); d(); e(); r(); //harder
  barrido();
  
  t(); o(); //to
  barrido();
  
  d(); e(); a(); l(); //deal
  barrido();
  
  w(); i(); t(); h(); //with
  barrido();
  
  t(); h(); a(); n(); //than
  barrido();
  
  d(); e(); l(); i(); b(); e(); r(); a(); t(); e(); //deliberate
  barrido();
  
  e(); v(); i(); l(); //evil
 
  //end

}


// PUNTOS
// dot top left
void DTL(){
  strip.clear();
  rect(2,1,1,1, luz(204,51,255));
  strip.show();
  wait(corto);
  strip.clear();
  strip.show();
}

// dot top right
void DTR(){
  strip.clear();
  rect(2,6,1,1, luz(204,51,255));
  strip.show();
  wait(corto);
  strip.clear();
  strip.show();
}

// dot bottom left
void DBL(){
  strip.clear();
  rect(6,1,1,1, luz(204,51,255));
  strip.show();
  wait(corto);
  strip.clear();
  strip.show();
}

// dot bottom right
void DBR(){
  strip.clear();
  rect(6,6,1,1, luz(204,51,255));
  strip.show();
  wait(corto);
  strip.clear();
  strip.show();
}

// RAYAS
// line top left
void LTL(){
  strip.clear();
  rect(1,1,1,3, luz(51,51,255));
  strip.show();
  wait(largo);
  strip.clear();
  strip.show();
}

// line top right
void LTR(){
  strip.clear();
  rect(1,5,1,3, luz(51,51,255));
  strip.show();
  wait(largo);
  strip.clear();
  strip.show();
}
// line bottom left
void LBL(){
  strip.clear();
  rect(5,1,1,3, luz(51,51,255));
  strip.show();
  wait(largo);
  strip.clear();
  strip.show();
}
// line bottom right
void LBR(){
  strip.clear();
  rect(5,5,1,3, luz(51,51,255));
  strip.show();
  wait(largo);
  strip.clear();
  strip.show();
}

// LETRAS
// A
void a(){
  DTL();
  wait(corto);
  LTR();
  wait(largo);
  strip.clear();
}

// B
void b(){
  LTL();
  wait(corto);
  DTR();
  wait(corto);
  DBL();
  wait(corto);
  DBR();
  wait(largo);
  strip.clear();
}

// C
void c(){
  LTL();
  wait(corto);
  DTR();
  wait(corto);
  LBL();
  wait(corto);
  DBR();
  wait(largo);
  strip.clear();
}

// D
void d(){
  LTL();
  wait(corto);
  DTR();
  wait(corto);
  DBL();
  wait(largo);
  strip.clear();
}

// E
void e(){
  DTL();
  wait(largo);
  strip.clear();
}

// G
void g(){
  LTL();
  wait(corto);
  LTR();
  wait(corto);
  DBL();
  wait(largo);
  strip.clear();
}

// H
void h(){
  DTL();
  wait(corto);
  DTR();
  wait(corto);
  DBL();
  wait(corto);
  DBR();
  wait(largo);
  strip.clear();
}

// I
void i(){
  DTL();
  wait(corto);
  DTR();
  wait(largo);
  strip.clear();
}

// L
void l(){
  DTL();
  wait(corto);
  LTR();
  wait(corto);
  DBL();
  wait(corto);
  DBR();
  wait(largo);
  strip.clear();
}

// M
void m(){
  LTL();
  wait(corto);
  LTR();
  wait(largo);
  strip.clear();
} 

// N
void n(){
  LTL();
  wait(corto);
  DTR();
  wait(largo);
  strip.clear();
} 

// O
void o(){
  LTL();
  wait(corto);
  LTR();
  wait(corto);
  LBL();
  wait(largo);
  strip.clear();
}

// R
void r(){
  DTL();
  wait(corto);
  LTR();
  wait(corto);
  DBL();
  wait(largo);
  strip.clear();
} 

// S
void s(){
  DTL();
  wait(corto);
  DTR();
  wait(corto);
  DBL();
  wait(largo);
  strip.clear();
} 

// T
void t(){
  LTL();
  wait(largo);
  strip.clear();
} 

// V
void v(){
  DTL();
  wait(corto);
  DTR();
  wait(corto);
  DBL();
  wait(corto);
  LBR();
  wait(largo);
  strip.clear();
}  

// W
void w(){
  DTL();
  wait(corto);
  LTR();
  wait(corto);
  LBL();
  wait(largo);
  strip.clear();
} 

// lluvia suave: una cortina de luz que baja con bordes difuminados
//marca inicio
void lluviaSuave() {
  const float ANCHO  = 4.0;    // largo de la estela (en filas)
  const float PASO   = 0.15;   // avance por cuadro (menos = más lento y suave)
  const float DESFASE = 3.0;   // diferencia de altura entre columnas (0 = barrido recto)

  float desfase[8];
  for (int c = 0; c < 8; c++) desfase[c] = DESFASE * random(0, 101) / 100.0;

  for (float pos = -1.0; pos < 8 + ANCHO + DESFASE + 1; pos += PASO) {
    strip.clear();
    for (int c = 0; c < 8; c++) {
      for (int f = 0; f < 8; f++) {
        float d = (pos - desfase[c]) - f;       // distancia detrás del frente
        if (d > -1.0 && d < ANCHO) {
          float k = (d < 0) ? (1.0 + d)         // borde delantero: aparece suave
                            : (1.0 - d / ANCHO); // estela: se apaga poco a poco
          k = k * k;                            // curva que se ve más natural al ojo
          strip.setPixelColor(indice(f, c), luz(51 * k, 255 * k, 188 * k));
        }
      }
    }
    strip.show();
    wait(20);                                   // ~50 cuadros por segundo
  }
  strip.clear();
  strip.show();
}

// barrido de luz: una columna que cruza la matriz de izquierda a derecha
void barrido() {
  for (int c = 0; c < 8; c++) {
    strip.clear();
    rect(0, c, 8, 1, luz(255, 51, 153));   // columna c, de arriba a abajo
    strip.show();
    wait(60);                               // velocidad: menos = más rápido
  }
  strip.clear();
  strip.show();
}
```