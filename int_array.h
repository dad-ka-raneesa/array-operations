#ifndef __INT_ARRAY_H_
#define __INT_ARRAY_H_

typedef struct
{
  int *values;
  int length;
} Int_array;

#define FOR_EACH(startAt, endAt) for (int i = startAt; i < endAt; i++)

void display_int_array(Int_array *array);

#endif