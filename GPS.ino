#include <SoftwareSerial.h>

SoftwareSerial GPSinterne = SoftwareSerial(2,3);
SoftwareSerial GPSexterne = SoftwareSerial(5,4);

void setup()
{
	GPSinterne.begin(4800);
//	GPSexterne.begin(4800);
	Serial.begin(9600);
}
void loop()
{
	if(GPSinterne.available() > 0)
	{
		char chaine = GPSinterne.read();
//		char someChar = GPSexterne.read();
		Serial.print(chaine);
	}
}