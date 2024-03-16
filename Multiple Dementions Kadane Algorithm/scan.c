#include <stdio.h>
#include <stdlib.h>

int* Array(int* size, int dimention) {
    int* result = NULL;
    int actualSize = 1;
    int i = 0;

    while (i < dimention) {
        actualSize *= size[i];

        i += 1;
    }
    result = (int*)malloc(sizeof(int) * actualSize);
    
    i = 0;
    while (i < actualSize) {
        scanf("%i", result + i);
        i += 1;
    }

    return result;
}