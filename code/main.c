#include <stdio.h>
#include <stdlib.h>

#include "subroutines.h"

int main() {
    int result = 0;
    int dimension = 0;
    int *size = NULL;
    int *array = NULL;
    int i = 0;

    scanf("%i", &dimension);

    size = (int *)malloc(sizeof(int) * dimension);

    i = dimension;
    while (i > 0) {
        i -= 1;

        scanf("%i", size + i);
    }

    array = Array(size, dimension);
    result = Kadane(array, size, dimension);

    printf("%i", result);

    free(size);
    free(array);

    return 0;
}