#include "add.h"
#include "remove.h"

int Kadane1d(int* array, int sizex) {
    int tempSum = 0;
    int sum = 0;
    int i = 0;

    while (i < sizex) {
        tempSum += array[i];
        if (tempSum > sum) {
            sum = tempSum;
        }
        if (tempSum < 0) {
            tempSum = 0;
        }
        i++;
    }

    return sum;
}

int Kadane2d(int** array, int sizex, int sizey) {
    int tempSum = 0;
    int sum = 0;
    int i = 0;
    int j = 0;

    while (i < sizey) {
        j = i;
        while (j < sizey) {
            if (i != j) {
                Add1d(array[i], array[j], sizex);
            }
            tempSum = Kadane1d(array[i], sizex);
            if (tempSum > sum) {
                sum = tempSum;
            }
            j++;
        }
        j = i + 1;
        while (j < sizey) {
            Remove1d(array[i], array[j], sizex);
            j++;
        }
        i++;
    }

    return sum;
}

int Kadane3d(int*** array, int sizex, int sizey, int sizez) {
    int tempSum = 0;
    int sum = 0;
    int i = 0;
    int j = 0;

    while (i < sizez) {
        j = i;
        while (j < sizez) {
            if (i != j) {
                Add2d(array[i], array[j], sizex, sizey);
            }
            tempSum = Kadane2d(array[i], sizex, sizey);
            if (tempSum > sum) {
                sum = tempSum;
            }
            j++;
        }
        j = i + 1;
        while (j < sizez) {
            Remove2d(array[i], array[j], sizex, sizey);
            j++;
        }
        i++;
    }

    return sum;
}

int Kadane4d(int**** array, int sizex, int sizey, int sizez, int sizew) {
    int tempSum = 0;
    int sum = 0;
    int i = 0;
    int j = 0;

    while (i < sizew) {
        j = i;
        while (j < sizew) {
            if (i != j) {
                Add3d(array[i], array[j], sizex, sizey, sizez);
            }
            tempSum = Kadane3d(array[i], sizex, sizey, sizez);
            if (tempSum > sum) {
                sum = tempSum;
            }
            j++;
        }
        j = i + 1;
        while (j < sizew) {
            Remove3d(array[i], array[j], sizex, sizey, sizez);
            j++;
        }
        i++;
    }

    return sum;
}

int Kadane5d(int***** array, int sizex, int sizey, int sizez, int sizew, int sizeq) {
    int tempSum = 0;
    int sum = 0;
    int i = 0;
    int j = 0;

    while (i < sizeq) {
        j = i;
        while (j < sizeq) {
            if (i != j) {
                Add4d(array[i], array[j], sizex, sizey, sizez, sizew);
            }
            tempSum = Kadane4d(array[i], sizex, sizey, sizez, sizew);
            if (tempSum > sum) {
                sum = tempSum;
            }
            j++;
        }
        j = i + 1;
        while (j < sizeq) {
            Remove4d(array[i], array[j], sizex, sizey, sizez, sizew);
            j++;
        }
        i++;
    }

    return sum;
}

int Kadane6d(int****** array, int sizex, int sizey, int sizez, int sizew, int sizeq, int sizeg) {
    int tempSum = 0;
    int sum = 0;
    int i = 0;
    int j = 0;

    while (i < sizeg) {
        j = i;
        while (j < sizeg) {
            if (i != j) {
                Add5d(array[i], array[j], sizex, sizey, sizez, sizew, sizeq);
            }
            tempSum = Kadane5d(array[i], sizex, sizey, sizez, sizew, sizeq);
            if (tempSum > sum) {
                sum = tempSum;
            }
            j++;
        }
        j = i + 1;
        while (j < sizeg) {
            Remove5d(array[i], array[j], sizex, sizey, sizez, sizew, sizeq);
            j++;
        }
        i++;
    }

    return sum;
}