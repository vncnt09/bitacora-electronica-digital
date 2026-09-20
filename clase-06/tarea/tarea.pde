int contador = 0;
void setup(){
size(960,540);
colorMode(HSB,360,100,100,100);
background(31,8,99);
PFont fuente;
  fuente = loadFont("AgencyFB-Bold-48.vlw");
  textFont(fuente);
}
void draw(){
   contador = (contador + 1) % 101; 
//rect negro   
 pushMatrix();
 rotate(radians(315));
 fill(0,0,0);
 rect(200,400,129,707);
 popMatrix();
 
   //rect gris
   pushMatrix();
   rotate(radians(-35));
   fill(0,0,62);
   noStroke();
   rect(-500,-100,771,456);
   popMatrix();
   
 //ellipse rojo  
 fill(0,80,contador);
 noStroke();
 ellipse(500,155,300,300);
 
   //text negro
   pushMatrix();
   rotate(radians(-35));
   fill(0,0,0);
   textSize(90);
   text("WORDS THEMSELVES",-220,440);
   textSize(55);
   text("aren't that important",-220,490);
   popMatrix();
   
 //text beige  
 pushMatrix();
 rotate(radians(45.5));
 fill(31,8,99);
 textSize(67);
 text("they are tools we use",524,-250);
 popMatrix();
 
   //rect gris2
   fill(0,0,62);
   rect(340,410,390,110);
   
 //text negro2
 fill(0,0,0);
 textSize(90);
 text("TO EXPRESS",360,500);
    
   //ellipse
   stroke(0,0,0);
   strokeWeight(10);
   noFill();
   ellipse(980,180,340,340);
 
 //text negro3
pushMatrix();
translate(1100, -250); 
rotate(radians(90));
fill(0,0,0);
textSize(50);
text("-RYU MURAKAMI",300,200);
popMatrix();
}
