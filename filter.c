#include <stdio.h>
#include <stdlib.h>
#include "int_array.h"
#include "filter.h"

Bool is_even(int number){
  if(number % 2 == 0){
    return True;
  }
  return False;
}

Bool is_odd(int number){
  if(is_even(number)){
    return False;
  }
  return True;
}

Int_array *create_copy_of_array(Int_array *array){
  Int_array *new_array = malloc(sizeof(Int_array));
  new_array->length = array->length;
  new_array->values = malloc(sizeof(int) * array->length);
  FOR_EACH(0, array->length)
  {
    new_array->values[i] = array->values[i];
  }
  return new_array;
}

Int_array *filter(Int_array *array, Function_for_filter filter_func){
  Int_array *new_array = malloc(sizeof(Int_array));
  new_array->length = 0;
  new_array->values = malloc(sizeof(int) * array->length);
  FOR_EACH(0, array->length)
  {
    if(filter_func(array->values[i])){
      new_array->values[new_array->length] = array->values[i] ;
      new_array->length++;
    }
  }
  return create_copy_of_array(new_array);
}