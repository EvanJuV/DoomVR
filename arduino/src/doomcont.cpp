/*
  Controller for DoomVR game, HackMTY 2016
  Ricardo Garza Gerhard - ricardogg95@gmail.com
*/

#include "wire.h"
#include <wiichuck.h>

byte accx, accy, accz;
int loop_cnt = 0;


void setup() {
  Serial.begin(9600);
  nunchuck_init();

  Serial.print("WiiChuck ready\n");
}

void loop() {
  if (loop_cnt > 100) {
    loop_cnt = 0;

    nunchuck_get_data();

    accx = nunchuck_accelx();
    accy = nunchuck_accely();

    Serial.print("Accelx: "); Serial.println(accx);
    Serial.print("Accely: "); Serial.println(accy);
  }
  loop_cnt++;
  //delay(1);
}
