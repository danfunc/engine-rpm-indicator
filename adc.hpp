#ifndef ENGINE_RPM_INDICATOR_ADC_HPP
#define ENGINE_RPM_INDICATOR_ADC_HPP
#include "pico/stdlib.h"
#include "hardware/adc.h"
class adc
{
private:

uint const pin_num;
public:
    adc(uint gpio_num);
    ~adc();
    uint read(){
        adc_select_input(2);
        return ::adc_read();
    };
};


#endif // ENGINE_RPM_INDICATOR_ADC_HPP