//vamos a usar dos funciones propias de processing q yo debería poner cada vez q hago algo en este software
void setup(){
  //cambiar tamaño de rectangulo gris, se llama lienzo
  //se hace con la función size(TamañoEnPixelesHORIZONTALxTmñPxVERT);
  size(400,800);
  
  // para cambiar el color de fondo
  // uso background();
  // por defecto, tiene un solo argumento
  // el color en escala de grises
  // donde 0 es negro, y 255 es blanco
  // todo valor intermedio es un gris
  background(255);}
  
void draw(){
  //vamos a generar una línea con la función line();}
  //line(ptoInicialX,ptoiY,ptoFinX,ptoFinY)
  line(300,100,400,300);
  
  // para desplegar texto en el lienzo usamos
  // text("texto a desplegar", posX, posY);
  // hay que rellenar el texto antes de ejecutarlo
  // fill(); rellena con un color en escala de gris
  fill(200);
  textSize(20);
  text("holaa", 200, 400);
}
