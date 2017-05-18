


void setup() {
  size(255, 255);
  strokeWeight(0);
  frameRate(.5);
}
 
void draw() {
  int dy = mouseY;
  int dx = mouseX;
  PVector dir = PVector.sub(mx(), pmx());
  float magnitude = dir.mag();
  background(255, 255, 255);
  fill((dx),(dy),((dx)-(dy)));
  println(dir);
  
  if (magnitude > 10) {
    ellipse(random(255),random(255),50,50);
  }
  else if (magnitude < 10){
    rect(random(255),random(255),50,50);
  }
 

}
PVector mx() {
  return new PVector(mouseX, mouseY);
}
 
PVector pmx() {
  return new PVector(pmouseX, pmouseY);
}