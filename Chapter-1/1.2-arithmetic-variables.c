#include <stdio.h>
// oC=(5/9)(oF-32)

// in out
//  1 17
//  20 -6
//  40 4
//  60 15
//  80 26
//  100 37

main() {
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 100;
  step = 20;

  fahr = lower;
  while(fahr <= upper)
  {
    celsius = 5 * (fahr-32) / 9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }

}


