#include <stdio.h>

void insert(int arr[], int n, int index, int value) {
    int i;
    // shift elements to the right to make space for the new element
    for (i = n-1; i >= index; i--) {
        arr[i+1] = arr[i];
    }
    // insert the new element
    arr[index] = value;
}

int main() {
    int arr[10] = {1, 2, 4, 5, 6};
    int n = 5;
    int index = 2;
    int value = 3;
    insert(arr, n, index, value);
    n++;
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
