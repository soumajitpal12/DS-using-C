#include <stdio.h>

int linear_search(int arr[], int n, int target) {
    // iterate through the array and compare each element to the target value
    for (int i = 0; i<n; i++) {
        if (arr[i] == target) {
            // return the index of the target value if it is found
            return i;
        }
    }
    // target value not found
    return -1;
}

int main() {
    int arr[100], n, target, result;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target value: ");
    scanf("%d", &target);
    result = linear_search(arr, n, target);
    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", result);
    }
    return 0;
}

