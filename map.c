#include <stdio.h>
#include <stdlib.h>
#include "int_array.h"
#include "map.h"

int square_of_num(int value)
{
  return value * value;
}

int double_of_num(int value)
{
  return value + value;
}

Int_array *map(Int_array *array, Function_for_map mapper)
{
  Int_array *new_array = malloc(sizeof(Int_array));
  new_array->length = array->length;
  new_array->values = malloc(sizeof(int) * new_array->length);
  FOR_EACH(0, array->length)
  {
    new_array->values[i] = mapper(array->values[i]);
  }
  return new_array;
}