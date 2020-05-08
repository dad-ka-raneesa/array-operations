#include <stdio.h>
#include "int_array.h"

void display_int_array(Int_array *array)
{
  FOR_EACH(0, array->length)
  {
    printf("%d ", array->values[i]);
  }
  printf("\n");
}