#ifndef __filter_h_
#define __filter_h_

typedef enum
{
  False,
  True
} Bool;

typedef Bool (*Function_for_filter)(int);

Bool is_even(int);
Bool is_odd(int number);
Int_array *filter(Int_array *array, Function_for_filter operation);

#endif