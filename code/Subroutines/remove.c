#include "subroutines.h"

void Remove(int *array1, int *array2, int *size, int dimension) {
    int i = 0;
    int sum = 0;

    if (dimension == 1) {
        while (i < size[0]) {
            array1[i] -= array2[i];
            i++;
        }
    }
    else {
        sum = SumDimensions(size, dimension - 1);

        while (i < size[dimension - 1]) {
            Remove(array1 + (i * sum), array2 + (i * sum), size, dimension - 1);
            i++;
        }
    }
}