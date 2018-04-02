//file: main.cpp
#include <Arduino.h>
#include "rom/gpio.h"
#include "esp_log.h"
#include "esp_spi_flash.h"

#include "py/runtime.h"
#include "py/mperrno.h"
#include "py/mphal.h"
#include "drivers/dht/dht.h"
#include "modesp.h"
int funn()
{
	return(4);
}

extern "C"{
	STATIC mp_obj_t esp_fun(void) {
	    return mp_obj_new_int_from_uint(funn());
	}
	STATIC MP_DEFINE_CONST_FUN_OBJ_0(esp_fun_obj, esp_fun);
}