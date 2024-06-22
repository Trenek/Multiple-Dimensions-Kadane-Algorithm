int SumDimensions(int *size, int dimension) {
    int result = 1;

    while (dimension > 0) {
        dimension -= 1;

        result *= size[dimension];
    }

    return result;
}