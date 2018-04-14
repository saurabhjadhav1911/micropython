#include <Arduino.h>
#include "esp32-hal-gpio.h"
#include "arduinocpp.h"

int test()
{
	//return min(4,5);
    return digitalRead(4);
}
