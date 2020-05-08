#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "int_array.h"
#include "map.h"
#include "filter.h"
#include "reduce.h"

#define NEW_LINE printf("\n");

int main(void){
  int result;
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
  NEW_LINE;

  printf("Map Operation:\n");
  Function_for_map map_functions[2] = {&square_of_num,&double_of_num};
  Int_array *new_array = map(numbers, map_functions[0]);
  printf("New array(Squares): ");
  display_int_array(new_array);

  new_array = map(numbers, map_functions[1]);
  printf("New array(Doubles): ");
  display_int_array(new_array);
  NEW_LINE;

  printf("Filter Operation:\n");
  Function_for_filter filter_functions[2] = {&is_even,&is_odd};
  new_array = filter(numbers, filter_functions[0]);
  printf("New array(Evens): ");
  display_int_array(new_array);

  new_array = filter(numbers, filter_functions[1]);
  printf("New array(Odds): ");
  display_int_array(new_array);
  NEW_LINE;

  printf("Reduce Operation:\n");
  Function_for_reduce reduce_functions[2] = {&get_smaller_number, &get_greater_number};
  result = reduce(numbers, INFINITY, reduce_functions[0]);
  printf("Reduce result(Smallest number): %d", result);
  NEW_LINE;

  result = reduce(numbers, 0, reduce_functions[1]);
  printf("Reduce result(Greater number): %d", result);
  NEW_LINE;
  return 0;
}