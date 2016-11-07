/* LM35 temperature sensor
devoloped by http://www.ecebots.in */

#include<ecebotslm35.h>
lm35 mydata(A0);//select analog pin A0,A1,A2,A3,A4,A5,A6
                //connect your LM35 data pin to this analog pin
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
float t;
void loop() {
  // put your main code here, to run repeatedly:
t=mydata.temp();
Serial.print(" Temperature = ");
Serial.println(t);
}