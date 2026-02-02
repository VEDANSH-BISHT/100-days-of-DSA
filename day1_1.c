

#include <stdio.h>
#define SIZE 1000

int main() {
    int nums[] = {3, 2, 4};
    int target = 6;
    int n = 3;

    int hash[SIZE];
    for (int i = 0; i < SIZE; i++)
        hash[i] = -1;

    for (int i = 0; i < n; i++) {
        int comp = target - nums[i];

        if (comp >= 0 && hash[comp] != -1) {
            printf("[%d, %d]", hash[comp], i);
            return 0;
        }
        hash[nums[i]] = i;
    }
    return 0;
}
