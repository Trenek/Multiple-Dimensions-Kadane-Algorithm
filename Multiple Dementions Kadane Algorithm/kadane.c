#include "subroutines.h"

int Kadane(int* array, int* size, int dimention) {
    int tempSum = 0;
    int sum = 0;
    int i = 0;
    int j = 0;
    int dimentionSum = 0;

    if (dimention == 1) {
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
        dimentionSum = SumDimentions(size, dimention - 1);
        while (i < size[dimention - 1]) {
            j = i;
            while (j < size[dimention - 1]) {
                if (i != j) {
                    Add(array + (i * dimentionSum), array + (j * dimentionSum), size, dimention - 1);
                }
                tempSum = Kadane(array, size, dimention - 1);
                if (tempSum > sum) {
                    sum = tempSum;
                }
                j++;
            }
            j = i + 1;
            while (j < size[dimention - 1]) {
                Remove(array + (i * dimentionSum), array + (j * dimentionSum), size, dimention - 1);
                j++;
            }
            i++;
        }
    }

    return sum;
}