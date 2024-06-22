#include <stdio.h>
#include <stdlib.h>
#include "subroutines.h"

int main() {
    int result = 0;
    int dimention = 0;
    int *size = NULL;
    int *array = NULL;
    int i = 0;

    scanf("%i", &dimention);

    size = (int *)malloc(sizeof(int) * dimention);

    i = dimention;
    while (i > 0) {
        i -= 1;

        scanf("%i", size + i);
    }

    array = Array(size, dimention);
    result = Kadane(array, size, dimention);

    printf("%i", result);

    free(size);
    free(array);

    return 0;
}