#include <Vect3D.h>

Vect3D v(10,10,10);

void setup()
{
	Serial.begin(9600);
    Serial.println(v.x);
    Serial.print(v.y);
    Serial.print(v.z);
}

void loop()
{
	
}
