int SumDimentions(int* size, int dimention) {
    int result = 1;

    while (dimention > 0) {
        dimention -= 1;

        result *= size[dimention];
    }

    return result;
}