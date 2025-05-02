#include "adc.hpp"
#include "hardware/adc.h"
adc::adc(uint pin_num):pin_num(0)
{
    adc_init();
    adc_gpio_init(pin_num);
}

adc::~adc()
{
}
