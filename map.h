#ifndef __MAP_H_
#define __MAP_H_

typedef int (*Function)(int);

int square_of_num(int value);
int double_of_num(int value);

Int_array *map(Int_array *array, Function operation);

#endif