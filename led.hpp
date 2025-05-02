#ifndef ENGINE_RPM_INDICATOR_LED_HPP
#define ENGINE_RPM_INDICATOR_LED_HPP
#include "hardware/pwm.h"
using uint = unsigned int;
class LED {
private:
  uint const pin_num;
  uint slice_num;
  uint16_t wrap;
  float level;
  pwm_config config;
public:
  LED(uint gpio_num, float level);
  void on();
  void off();
  void change_level(float level);
  ~LED();
};

#endif // ENGINE_RPM_INDICATOR_LED_HPP