int missingNumber(int arr[], int size) {
    int n = size + 1;
    int xorAll = 0;

    for (int i = 1; i <= n; i++)
        xorAll ^= i;

    for (int i = 0; i < size; i++)
        xorAll ^= arr[i];

    return xorAll;
}
