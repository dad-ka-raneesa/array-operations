#include <stdio.h>
#include <stdlib.h>
#include "int_array.h"
#include "reduce.h"

int get_smaller_number(int num1,int num2){
  if(num2 < num1){
    return num2;
  }
  return num1;
}

int get_greater_number(int num1,int num2){
  if(num2 > num1){
    return num2;
  }
  return num1;
}

int reduce(Int_array *array, int num, Function_for_reduce operation){
  int result = num;
  FOR_EACH(0, array->length){
    result = operation(result, array->values[i]);
  }
  return result;
}