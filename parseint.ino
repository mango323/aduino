#include <Math.h>
int height, bottom ;

void setup() {

  Serial.begin(9600);
}

double calcSide(int bottom, int height){
  return sqrt(pow(bottom, 2) + pow(height, 2));
}
int readInt(String message){
  Serial.println(message);
  while(Serial.available() == 0){
  
  }
  return Serial.parseInt();
}  
  
void loop() {
  // put your main code here, to run repeatedly:
  height = readInt("Please Enter Height");
  bottom = readInt("Please Enter Bottom");
  Serial.println(calcSide(bottom, height));
}




