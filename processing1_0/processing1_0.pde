import processing.serial.*;

Serial myPort;  // Create object from Serial class

void setup() 
{
  size(1200,200); //make our canvas 200 x 200 pixels big
  String portName = Serial.list()[2]; //change the 0 to a 1 or 2 etc. to match your port
  myPort = new Serial(this, portName, 9200);
}

void draw() {
 if (mouseX < 100){
     myPort.write('1');         //send a 1
     println("1");   
 } 
 if (mouseX < 200 && mouseX >=100){
     myPort.write('2');         //send a 1
     println("2");   
}
 if (mouseX < 300 && mouseX >=200){
     myPort.write('3');         //send a 1
     println("3");   
}
 if (mouseX < 400 && mouseX >=300){
     myPort.write('4');         //send a 1
     println("4");   
}
 if (mouseX < 500 && mouseX >=400){
     myPort.write('5');         //send a 1
     println("5");   
}
 if (mouseX < 600 && mouseX >=500){
     myPort.write('6');         //send a 1
     println("6");   
}
 if (mouseX < 700 && mouseX >=600){
     myPort.write('7');         //send a 1
     println("7");   
}
 if (mouseX < 800 && mouseX >=700){
     myPort.write('8');         //send a 1
     println("8");   
}
 if (mouseX < 900 && mouseX >=800){
     myPort.write('9');         //send a 1
     println("9");   
}

}


//void draw() {
//  if (mousePressed == true) 
//  {                           //if we clicked in the window
//   myPort.write('1');         //send a 1
//   println("1");   
//  } else 
//  {                           //otherwise
//  myPort.write('0');          //send a 0
//  println("0");
//  }   
//