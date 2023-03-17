#include <cstdio>

int* Array1d(int sizex) {
    int* result = new int[sizex];
    int i = 0;

    while (i < sizex) {
        scanf("%i", result + i);
        i++;
    }

    return result;
}

int** Array2d(int sizex, int sizey) {
    int** result = new int* [sizey];
    int i = 0;

    while (i < sizey) {
        result[i] = Array1d(sizex);
        i++;
    }

    return result;
}

int*** Array3d(int sizex, int sizey, int sizez) {
    int*** result = new int** [sizez];
    int i = 0;

    while (i < sizey) {
        result[i] = Array2d(sizex, sizey);
        i++;
    }

    return result;
}

int**** Array4d(int sizex, int sizey, int sizez, int sizew) {
    int**** result = new int*** [sizez];
    int i = 0;

    while (i < sizey) {
        result[i] = Array3d(sizex, sizey, sizez);
        i++;
    }

    return result;
}

int***** Array5d(int sizex, int sizey, int sizez, int sizew, int sizeq) {
    int***** result = new int**** [sizez];
    int i = 0;

    while (i < sizey) {
        result[i] = Array4d(sizex, sizey, sizez, sizew);
        i++;
    }

    return result;
}

int****** Array6d(int sizex, int sizey, int sizez, int sizew, int sizeq, int sizeg) {
    int****** result = new int***** [sizez];
    int i = 0;

    while (i < sizey) {
        result[i] = Array5d(sizex, sizey, sizez, sizew, sizeq);
        i++;
    }

    return result;
}
