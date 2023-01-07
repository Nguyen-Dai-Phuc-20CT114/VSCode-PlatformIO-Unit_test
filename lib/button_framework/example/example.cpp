#include <Arduino.h>

#include "config/config.h"
#include "types/btn.hpp"


btn btn_arr[BTN_NUM];

void Btn_setup()
{
    for(uint8_t i=0; i<BTN_NUM; ++i)
    {
        pinMode(btn_arr[i].cfg.pin, btn_arr[i].cfg.mode);
    }
}


void Btn_loop()
{

}


void setup()
{
    Btn_setup();
}


void loop()
{
    Btn_setup();
}