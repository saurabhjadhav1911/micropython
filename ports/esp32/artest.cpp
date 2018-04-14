//file: main.cpp
#include <Arduino.h>
//#include "rom/gpio.h"
//#include "esp_log.h"
//#include "esp_spi_flash.h"

#include "py/runtime.h"
#include "py/mperrno.h"
#include "py/mphal.h"
#include "drivers/dht/dht.h"
#include "artest.h"
/*
#include <components/micropython-wrap/functionwrapper.h>

//function we want to call from within a MicroPython script
std::vector< std::string > SomeFunction( std::vector< std::string > vec )
{
  for( auto& v : vec )
    v += "TRANSFORM";
  return vec;
}

//function names are declared in structs
struct FunctionNames
{
  func_name_def( TransformList )
};

extern "C"
{
  void RegisterMyModule(void)
  {
    //register a module named 'foo'
    auto mod = upywrap::CreateModule( "foo" );

    //register our function with the name 'TransformList'
    //conversion of a MicroPython list of strings is done automatically
    upywrap::FunctionWrapper wrapfunc( mod );
    wrapfunc.Def< FunctionNames::TransformList >( SomeFunction );
  }
}
*/
int funn()
{
	return (4);
}
/*
STATIC mp_obj_t arduino_arset(void) {
    return mp_obj_new_int_from_uint(fun());
}

STATIC MP_DEFINE_CONST_FUN_OBJ_0(arduino_arset_obj, arduino_arset);


STATIC const mp_rom_map_elem_t arduino_module_globals_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_arduino) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_arset), (mp_obj_t)&arduino_arset_obj },
};

STATIC MP_DEFINE_CONST_DICT(arduino_module_globals, arduino_module_globals_table);

const mp_obj_module_t arduino_module = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t*)&arduino_module_globals,
};
*/