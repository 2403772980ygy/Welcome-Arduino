#include<Servo.h>
Servo sv;
void setup(){
    pinMode(12, OUTPUT);
    pinMode(11, OUTPUT);
    analogWrite(12, HIGH);
    sv.attach(11);
}
void loop(){
    for(int i=0;i<=180;i++)sv.write(i), delay(15);
    for(int i=180;~i;i--)sv.write(i), delay(15);
}
