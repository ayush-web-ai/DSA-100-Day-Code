#include <stdio.h>

int main() {
    int p, q, i, j;

    // size of first log
    scanf("%d", &p);
    int arr1[p];

    // elements of first log
    for (i = 0; i < p; i++) {
        scanf("%d", &arr1[i]);
    }

    // size of second log
    scanf("%d", &q);
    int arr2[q];

    // elements of second log
    for (i = 0; i < q; i++) {
        scanf("%d", &arr2[i]);
    }

    i = 0;
    j = 0;

    // Merge and print in chronological order
    while (i < p && j < q) {
        if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i]);
            i++;
        } else {
            printf("%d ", arr2[j]);
            j++;
        }
    }

    // Print remaining elements of array1
    while (i < p) {
        printf("%d ", arr1[i]);
        i++;
    }

    // Print remaining elements of array2
    while (j < q) {
        printf("%d ", arr2[j]);
        j++;
    }

    return 0;
}
