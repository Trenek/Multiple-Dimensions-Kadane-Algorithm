#include <stdio.h>
#include <stdlib.h>

#include "subroutines.h"

int *Array(int *size, int dimension) {
    int *result = NULL;
    int actualSize = SumDimensions(size, dimension);
    int i = 0;

    result = (int *)malloc(sizeof(int) * actualSize);
    
    i = 0;
    while (i < actualSize) {
        scanf("%i", result + i);
        i += 1;
    }

    return result;
}