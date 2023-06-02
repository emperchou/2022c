void setup(){
  size(400,400);
  fill(255,0,0);
  noStroke();
 
}
void draw(){

}
void mousePressed(){
  myheart(mouseX,mouseY);
}
void myheart(int dx ,int dy){
  for(int i=0;i<300;i++){
    for(int j=0;j<300;j++){
      float x=(j-150)/20.0;
      float y=-(i-150)/20.0;
      //float xxyy=(x*x+y*y-1);
      if((x*x+y*y-1) * (x*x+y*y-1)*(x*x+y*y-1)-x*x*y*y*y < 0){
        ellipse(j+dx-150,i+dy-150,10,10);
      }
    }
  }
}
