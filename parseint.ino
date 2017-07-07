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
  while(Serial.available() == 0){   // parserInt 함수는 정수 혹은 0을 반환함 
                                     // 123,456,789,123 과 같이 값을 차례로 반환하는데 사용할 수도 있지만 
  }                                  // while(Serial.available()==0)을 이용해서 다음 값을 받을 때까지 기다리게 할 수도 있다.
  return Serial.parseInt();
}  
  
void loop() {
  // put your main code here, to run repeatedly:
  height = readInt("Please Enter Height");         // 함수가 정수를 반환하므로 정수인 변수에 함수를 사용해도 된다.
  bottom = readInt("Please Enter Bottom");
  Serial.println(calcSide(bottom, height));
}




