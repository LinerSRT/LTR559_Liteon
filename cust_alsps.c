#include <linux/types.h>
#include <mach/mt_pm_ldo.h>
#include <cust_alsps.h>

static struct alsps_hw cust_alsps_hw = {
    .i2c_num    = 2,
    .polling_mode_ps =1,
    .polling_mode_als =1,
    .power_id   = MT65XX_POWER_NONE,    /*LDO is not used*/
    .power_vol  = VOL_DEFAULT,          /*LDO is not used*/
    .als_level  = { 5, 500,  2000,   20000,   65535, 200000,  0, 0, 0,  0, 0, 0, 0, 0, 0},
    .als_value  = {1, 1500, 10000, 50000, 100000, 200000,  0,  0, 0,  0,  0,  0,  0,  0,  0, 0},
    //.ps_threshold_high = 0, //Датчик работает,
    //.ps_threshold_low = 0,  //но не корректно. Данные в положении "1" нестабильны
    //.ps_threshold = 1000,
};
struct alsps_hw *get_cust_alsps_hw(void) {
    return &cust_alsps_hw;
}
