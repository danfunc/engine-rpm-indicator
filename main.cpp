#include "hardware/adc.h"
#include "led.hpp"
#include "pico/stdlib.h"
#include "pico/stdio.h"
#include "stdio.h"
#include "adc.hpp"

int main(int argc, char const *argv[]) {
  stdio_init_all();
  adc_init();
  float const level = 0.3;
  LED green{20,level},yellow1{22,level},yellow2{16,level},yellow3{17,level};
  adc adc{28};
  green.on();
  while (1)
  {
    uint32_t result = adc.read();
    if (result > 2000)
    {
      yellow3.on();
    }else{
      yellow3.off();
    }
    if (result > 1500)
    {
      yellow2.on();
    }else{
      yellow2.off();
    }
    if(result > 1000){
      yellow1.on();
    }else{
      yellow1.off();
    }
    if (result > 500)
    {
      green.on();
    }else{
      green.off();
    }
    printf("%d\n",result);
    
    sleep_ms(5);
  }
  
  return 0;
}
