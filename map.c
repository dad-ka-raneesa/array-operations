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

Int_array *map(Int_array *array, Function mapper)
{
  Int_array *newArray = malloc(sizeof(Int_array));
  newArray->length = array->length;
  newArray->values = malloc(sizeof(int) * newArray->length);
  FOR_EACH(0, array->length)
  {
    newArray->values[i] = mapper(array->values[i]);
  }
  return newArray;
}