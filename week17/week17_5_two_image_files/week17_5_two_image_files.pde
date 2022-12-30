PImage img;
void setup(){
  size(400,400);
  img = loadImage("astro.png");
}
void draw(){
  background(0,250,0);
  image(img,0,0);
}
