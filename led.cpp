#include "led.hpp"
#include "pico/stdlib.h"
LED::LED(uint pin_num, float level)
    : pin_num(pin_num), level(level), config(pwm_get_default_config()),wrap((uint16_t)1250000),slice_num(pwm_gpio_to_slice_num(pin_num)) {
        gpio_set_function(pin_num,GPIO_FUNC_PWM);
        pwm_init(slice_num,&config,true);
        pwm_set_gpio_level(pin_num,0);
        pwm_config_set_clkdiv(&config, 4.f);
      };

LED::~LED() {};

void LED::on() { pwm_set_gpio_level(this->pin_num, ( config.top * level)); };
void LED::off(){
    pwm_set_gpio_level(pin_num,0);
}
void LED::change_level(float level){
    this->level = level;
}