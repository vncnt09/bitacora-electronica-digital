//sometimes ignorance is even harder to deal with than deliberate evil
int dl = 1000;
int ledR = 8;
int ledV = 9;

void setup() {
  pinMode(ledR, OUTPUT);
  pinMode(ledV, OUTPUT);
}

void loop() {
  s(); o(); m(); e(); t(); i(); m(); e(); s(); //sometimes
  delay(dl); delay(dl); delay(dl);
  
  i(); g(); n(); o(); r(); a(); n(); c(); e(); //ignorance
  delay(dl); delay(dl); delay(dl);
  
  i(); s(); //is
  delay(dl); delay(dl); delay(dl);
  
  e(); v(); e(); n(); //even
  delay(dl); delay(dl); delay(dl);

  h(); a(); r(); d(); e(); r(); //harder
  delay(dl); delay(dl); delay(dl);
  
  t(); o(); //to
  delay(dl); delay(dl); delay(dl);
  
  d(); e(); a(); l(); //deal
  delay(dl); delay(dl); delay(dl);
  
  w(); i(); t(); h(); //with
  delay(dl); delay(dl); delay(dl);
  
  t(); h(); a(); n(); //than
  delay(dl); delay(dl); delay(dl);
  
  d(); e(); l(); i(); b(); e(); r(); a(); t(); e(); //deliberate
  delay(dl); delay(dl); delay(dl); 
  
  e(); v(); i(); l(); //evil
  delay(dl); delay(dl); delay(dl);
  
  //fin
  delay(dl);
}

void punto(){
  digitalWrite(ledR, HIGH);
  delay(150);
  digitalWrite(ledR, LOW);
  delay(dl);
}

void raya(){
 digitalWrite(ledV, HIGH);
  delay(1000);
  digitalWrite(ledV, LOW);
  delay(dl);
}

void a(){
punto(); raya();
delay(dl);}

void b(){
raya(); punto(); punto(); punto();
delay(dl);}

void c(){
raya(); punto(); raya(); punto();
delay(dl);}

void d(){
raya(); punto(); punto();
delay(dl);}

void e(){
punto();
delay(dl);}

void g(){
raya(); raya(); punto(); 
delay(dl);}

void h(){
punto(); punto(); punto(); punto();
delay(dl);}

void i(){
punto(); punto();
delay(dl);}

void l(){
punto(); raya(); punto(); punto();
delay(dl);}

void m(){
raya(); raya();
delay(dl);}

void n(){
raya(); punto();
  delay(dl);}

void o(){
raya(); raya(); raya(); 
delay(dl);}

void r(){
punto(); raya(); punto();
delay(dl);}

void s(){
punto(); punto(); punto();
delay(dl);}

void t(){
raya();
delay(dl);}

void v(){
punto(); punto(); punto(); raya();
delay(dl);}

void w(){
punto(); raya(); raya();
delay(dl);}

