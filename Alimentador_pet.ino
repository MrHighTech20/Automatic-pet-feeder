#include<Servo.h>

Servo s1;

int tservo = 1000;
int tarduino = 5000; //10800000; // vale 3h;
int aberto = 170;
int fechado = 0;

void setup() {
  // put your setup code here, to run once:
  s1.attach(10);
  s1.write(aberto);
  delay(tservo);
}

void loop() {
  // put your main code here, to run repeatedly:
  s1.write(fechado);
  delay(tarduino);
  s1.write(aberto);
  delay(tservo);

}
