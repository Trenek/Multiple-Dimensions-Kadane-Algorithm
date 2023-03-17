void Remove1d(int* array1, int* array2, int sizex) {
    int i = 0;

    while (i < sizex) {
        array1[i] -= array2[i];
        i++;
    }
}

void Remove2d(int** array1, int** array2, int sizex, int sizey) {
    int i = 0;

    while (i < sizey) {
        Remove1d(array1[i], array2[i], sizex);
        i++;
    }
}

void Remove3d(int*** array1, int*** array2, int sizex, int sizey, int sizez) {
    int i = 0;

    while (i < sizez) {
        Remove2d(array1[i], array2[i], sizex, sizey);
        i++;
    }
}

void Remove4d(int**** array1, int**** array2, int sizex, int sizey, int sizez, int sizew) {
    int i = 0;

    while (i < sizew) {
        Remove3d(array1[i], array2[i], sizex, sizey, sizez);
        i++;
    }
}

void Remove5d(int***** array1, int***** array2, int sizex, int sizey, int sizez, int sizew, int sizeq) {
    int i = 0;

    while (i < sizeq) {
        Remove4d(array1[i], array2[i], sizex, sizey, sizez, sizew);
        i++;
    }
}