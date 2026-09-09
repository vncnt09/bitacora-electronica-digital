int posY = 0;
void setup(){
  size(500,500);
  colorMode(HSB,360,100,100,100);
}
void draw(){
  posY = mouseY%360;
  background(127,0,100,100);
  pushMatrix();
  translate(width/2,height/2);
  fill(posY,88,93,80);
  rectMode(CENTER);
  rect(0,0,100,50);
  popMatrix();
  
  pushMatrix();
  translate(width*3/5,height*0.5555);
  fill(360-posY,88,93,50);
  ellipse(0,0,100,50);
  popMatrix();
  
  textSize(50);
  fill(0,0,0,100);
  text("posY: "+posY,100,100);
  text("360-posY: "+(360-posY),100,150);
}
