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

	pinMode(0, INPUT_PULLUP);
  nunchuck_init();

  Serial.print("WiiChuck ready\n");
}

void loop() {
  if (loop_cnt > 100) {
    loop_cnt = 0;
		nunchuck_get_data();
		nunchuck_print_data();
		if(digitalRead(0) == LOW) {
			Serial.println("Button: 1");
		} else {
			Serial.println("Button: 0");
    }
	}
  loop_cnt++;
  //delay(1);
}
