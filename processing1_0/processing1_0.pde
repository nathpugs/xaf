import processing.serial.*;

Serial port;  // Create object from Serial class

void setup() 
{
  size(255,255); //make our canvas 200 x 200 pixels big
  String portName = Serial.list()[2]; //change the 0 to a 1 or 2 etc. to match your port
  port = new Serial(this, portName, 9600);
}

void draw() {

int x = mouseX;
int y = mouseY;

byte out[] = new byte[2];
out[0] = byte(x);
out[1] = byte(y);

port.write(out);
}