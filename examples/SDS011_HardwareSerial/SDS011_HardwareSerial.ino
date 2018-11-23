// SDS011 dust sensor example
// -----------------------------
//
// By R. Zschiegner (rz@madavi.de).
// April 2016

#include <SDS011.h>

float p10, p25;
int err;

SDS011 my_sds;

#ifdef ESP32
HardwareSerial port(2);
#endif

void setup() {
	my_sds.begin(&port);
	Serial.begin(115200);
}

void loop() {
	err = my_sds.read(&p25, &p10);
	if (!err) {
		Serial.println("P2.5: " + String(p25));
		Serial.println("P10:  " + String(p10));
	}
	delay(100);
}
