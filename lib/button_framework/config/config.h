#ifndef configpp
#define configpp


/* ==================================================
** Libraries
**
** =============================================== */


#include "types/btn_cfg.hpp"
#include "const/esp_pin.h"
#include "const/gpio_fnc.h"


/* ==================================================
** Macros
**
** =============================================== */


// Number of buttons
#ifndef BTN_NUM
#define BTN_NUM 1
#endif


/* ==================================================
** Extern variables
**
** =============================================== */


btn_cfg btn_cfg_arr[BTN_NUM] = 
{
    {
        .pin    = D1,
        .mode   = INPUT_PULLUP,
    }
};


#endif