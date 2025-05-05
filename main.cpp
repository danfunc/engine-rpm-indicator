#include "adc.hpp"
#include "hardware/adc.h"
#include "led.hpp"
#include "pico/stdio.h"
#include "pico/stdlib.h"
#include "stdio.h"
#include "initializer_list"

int main(int argc, char const *argv[]) {
  stdio_init_all();
  adc_init();
  float const level = 0.3;
  std::initializer_list<uint> led_list = {8, 9, 10, 11, 12, 13, 14, 15,16,17,18,19,20,21,22,23,24};
  
  adc adc{28};
  while (1) {
    uint32_t result = adc.read();
    if (result > 1120) {

    } else {
    }
    if (result > 1000) {

    } else {
    }
    if (result > 880) {

    } else {
    }
    if (result > 750) {
    } else {
    }

    if (result > 620) {
     
    }else{

    }

    if (result > 500) {
    } else {
    }

    if (result > 350) {
    } else {
    }
    if (result > 250) {
    } else {
    }
    if (result > 120) {
    } else {
    }
    if (result > 70) {
    } else {
    }
    printf("%d\n", result);

    sleep_ms(5);
  }

  return 0;
}
