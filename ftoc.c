#include <stdio.h>
/* print Fahrenheit - Celsius table 
   for fahr = 0, 20, ... 300 */
main() {

  float fahr, celsius;
  int lower, upper, step;

  lower = -20;
  upper = 100;
  step = 20;

  celsius = lower;

  printf("%3s\t%6s\n", "oC", "oF");

  while(celsius <= upper) {
    fahr = (celsius / (5.0/9.0)) + 32.0;
    printf("%3.0f\t%6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }

}
