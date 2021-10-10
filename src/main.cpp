#include <mbed.h>

#include "encoder1.h"
#include "encoder3.h"

asm(".global _printf_float");

int main() {
  Encoder1 encoder1(24);
  Encoder3 encoder3(24);
  encoder1.start();
  encoder3.start();

  while (true) {
    encoder1.update();
    encoder3.update();

    printf("angle1: %f, angle3: %f\n", (float)encoder1.getSumangle(),
           (float)encoder3.getSumangle());
    ThisThread::sleep_for(10ms);
  }
}