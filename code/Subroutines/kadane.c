#include "subroutines.h"

int Kadane(int *array, int *size, int dimension) {
    int tempSum = 0;
    int sum = 0;
    int i = 0;
    int j = 0;
    int dimensionSum = 0;

    if (dimension == 1) {
        while (i < size[0]) {
            tempSum += array[i];
            if (tempSum > sum) {
                sum = tempSum;
            }
            if (tempSum < 0) {
                tempSum = 0;
            }
            i++;
        }
    }
    else {
        dimensionSum = SumDimensions(size, dimension - 1);
        while (i < size[dimension - 1]) {
            j = i;
            while (j < size[dimension - 1]) {
                if (i != j) {
                    Add(&array[i * dimensionSum], &array[j * dimensionSum], size, dimension - 1);
                }
                tempSum = Kadane(array, size, dimension - 1);
                if (tempSum > sum) {
                    sum = tempSum;
                }
                j++;
            }
            j = i + 1;
            while (j < size[dimension - 1]) {
                Subtract(&array[i * dimensionSum], &array[j * dimensionSum], size, dimension - 1);
                j++;
            }
            i++;
        }
    }

    return sum;
}