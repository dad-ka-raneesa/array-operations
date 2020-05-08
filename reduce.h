#ifndef __REDUCE_H_
#define __REDUCE_H_

typedef int (*Function_for_reduce)(int, int);

int get_smaller_number(int, int);
int get_greater_number(int, int);
int reduce(Int_array *array, int, Function_for_reduce operation);

#endif