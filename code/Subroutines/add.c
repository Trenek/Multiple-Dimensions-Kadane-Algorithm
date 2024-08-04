#include "subroutines.h"

void Add(int *array1, int *array2, int *size, int dimension) {
    int sum = SumDimensions(size, dimension - 1);
    int i = 0;

    if (dimension == 1) {
        while (i < size[dimension - 1]) {
            array1[i] += array2[i];
            i++;
        }
    }
    else {
        while (i < size[dimension - 1]) {
            Add(&array1[sum * i], &array2[sum * i], size, dimension - 1);
            i++;
        }
    }
}