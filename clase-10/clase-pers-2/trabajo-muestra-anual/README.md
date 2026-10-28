<!-- #include <Adafruit_NeoPixel.h>

#define PIN        6
#define NUMPIXELS  64
#define SERPENTINA false   // true si tu matriz zigzaguea por filas

int potPin = A5;
int valorPot = 0;
int intensidadLuz = 0;
int largo = 720;
int corto = 240;

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

// reemplazo de delay(): mientras espera, sigue leyendo el potenciómetro
void wait(unsigned long ms) {
  unsigned long inicio = millis();
  while (millis() - inicio < ms) {
    valorPot = analogRead(potPin);
    // map (valor a convertir, inicial bajo, inicial alto, final bajo, final alto)
    // de 0-1023 a 1-127 para que no se apague ni nos deje ciegos
    intensidadLuz = map(valorPot, 0, 1023, 1, 127);
    strip.setBrightness(intensidadLuz);
    strip.show();
    delay(10);
  }
}


void setup() {
  strip.begin();
  strip.setBrightness(127);
  strip.clear();
}


void loop() {
  // VACÍO
  strip.clear();
  strip.show();
  wait (corto);

  
}


// PUNTOS
// dot top left
void DTL(){
  strip.clear();
  rect(2,1,1,1 strip.Color(204,51,255));
  strip.show();
  wait(corto);
}

// dot top right
void DTR(){
  strip.clear();
  rect(2,6,1,1 strip.Color(204,51,255));
  strip.show();
  wait(corto);
}

// dot bottom left
void DBL(){
  strip.clear();
  rect(6,1,1,1 strip.Color(204,51,255));
  strip.show();
  wait(corto);
}

// dot bottom right
void DBR(){
  strip.clear();
  rect(6,6,1,1 strip.Color(204,51,255));
  strip.show();
  wait(corto);
}

// RAYAS
// line top left
void LTL(){
  strip.clear();
  rect(1,1,1,3 strip.Color(51,51,255));
  strip.show();
  wait(largo);
}

// line top right
void LTR(){
  strip.clear();
  rect(1,5,1,3 strip.Color(51,51,255));
  strip.show();
  wait(largo);
}
// line bottom left
void LBL(){
  strip.clear();
  rect(5,1,1,3 strip.Color(51,51,255));
  strip.show();
  wait(largo);
}
// line bottom right
void LBR(){
  strip.clear();
  rect(5,5,1,3 strip.Color(51,51,255));
  strip.show();
  wait(largo);
}

// LETRAS
// A
void a(){
  DTL();
  wait(corto);
  LTR();
  wait(corto);
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
  wait(corto);
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
  wait(corto);
  strip.clear();
}

// D
void d(){
  LTL();
  wait(corto);
  DTR();
  wait(corto);
  DBL();
  wait(corto);
  strip.clear();
}

// E
void e(){
  DTL();
  wait(corto);
  strip.clear();
}

// G
void g(){
  LTL();
  wait(corto);
  LTR();
  wait(corto);
  DBL();
  wait(corto);
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
  wait(corto);
  strip.clear();
}

// I
void i(){
  DTL();
  wait(corto);
  DTR();
  wait(corto);
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
  wait(corto);
  strip.clear();
}

// M
void m(){
  LTL();
  wait(corto);
  LTR();
  wait(corto);
  strip.clear();
} 

// N
void n(){
  LTL();
  wait(corto);
  DTR();
  wait(corto);
  strip.clear();
} 

// O
void o(){
  LTL();
  wait(corto);
  LTR();
  wait(corto);
  LBL();
  wait(corto);
  strip.clear();
}

// R
void r(){
  DTL();
  wait(corto);
  LTR();
  wait(corto);
  DBL();
  wait(corto);
  strip.clear();
} 

// S
void s(){
  DTL();
  wait(corto);
  DTR();
  wait(corto);
  DBL();
  wait(corto);
  strip.clear();
} 

// T
void t(){
  LTL();
  wait(corto);
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
  wait(corto);
  strip.clear();
}  

// W
void w(){
  DTL();
  wait(corto);
  LTR();
  wait(corto);
  LBL();
  wait(corto);
  strip.clear();
} 
 -->