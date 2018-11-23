// SDS011 dust sensor example for ESP32
// ------------------------------------
//
// By R. Zschiegner (rz@madavi.de).
// modified by S. Leiner (leiner@teco.edu)
//
// connect ESP32 RX pin (16) to SDS011 TX pin
//    and  ESP32 TX pin (17) to SDS011 RX pin
//
// April 2016

#include <SDS011.h>

float p10, p25;
int error;

HardwareSerial sdsSerial(2); // use Serial 2: RX pin:16, TX pin:17
SDS011 my_sds;

void setup() {
  sdsSerial.begin(9600);
	my_sds.begin(&sdsSerial);
	Serial.begin(115200);
}

void loop() {
	error = my_sds.read(&p25, &p10);
	if (!error) {
		Serial.println("P2.5: " + String(p25));
		Serial.println("P10:  " + String(p10));
	}
	delay(100);
}
