void Add1d(int* array1, int* array2, int sizex) {
    int i = 0;

    while (i < sizex) {
        array1[i] += array2[i];
        i++;
    }
}

void Add2d(int** array1, int** array2, int sizex, int sizey) {
    int i = 0;

    while (i < sizey) {
        Add1d(array1[i], array2[i], sizex);
        i++;
    }
}

void Add3d(int*** array1, int*** array2, int sizex, int sizey, int sizez) {
    int i = 0;

    while (i < sizez) {
        Add2d(array1[i], array2[i], sizex, sizey);
        i++;
    }
}

void Add4d(int**** array1, int**** array2, int sizex, int sizey, int sizez, int sizew) {
    int i = 0;

    while (i < sizew) {
        Add3d(array1[i], array2[i], sizex, sizey, sizez);
        i++;
    }
}

void Add5d(int***** array1, int***** array2, int sizex, int sizey, int sizez, int sizew, int sizeq) {
    int i = 0;

    while (i < sizeq) {
        Add4d(array1[i], array2[i], sizex, sizey, sizez, sizew);
        i++;
    }
}
