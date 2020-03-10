#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[]){

  //
  // unsigned number only
  //

  unsigned long x = 32;

  // x & (x-1)
  //
  // In unsigned number, x & (x-1) will delete the most right 1
  //
  // Check whether the number is the power of 2
  //      x = 0101, x-1 = 0100, x & (x-1) = 0100 != 0
  //      x = 0100, x-1 = 0011, x & (x-1) = 0000 == 0

  if ((x & (x - 1)) == 0) {
    printf("x is 2^n\n");
    }

    return 0;
}
