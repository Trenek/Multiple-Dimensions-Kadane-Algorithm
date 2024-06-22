#include "subroutines.h"

void Add(int *array1, int *array2, int *size, int dimention) {
    int sum = SumDimentions(size, dimention - 1);
    int i = 0;

    if (dimention == 1) {
        while (i < size[dimention - 1]) {
            array1[i] += array2[i];
            i++;
        }
    }
    else {
        while (i < size[dimention - 1]) {
            Add(array1 + (sum * i), array2 + (sum * i), size, dimention - 1);
            i++;
        }
    }
}