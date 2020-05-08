#include <stdio.h>
#include <stdlib.h>
#include "int_array.h"

int main(void){
  Int_array *numbers = malloc(sizeof(Int_array));
  numbers->length = 5;
  numbers->values = malloc(sizeof(int) * numbers->length);
  numbers->values[0] = 1;
  numbers->values[1] = 2;
  numbers->values[2] = 3;
  numbers->values[3] = 4;
  numbers->values[4] = 5;

  printf("Original array: ");
  display_int_array(numbers);
  return 0;
}