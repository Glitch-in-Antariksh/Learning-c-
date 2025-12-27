#include <stdio.h>

int main() { int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {scanf("%d", &arr[i]);}

    //BUBBLE SORT PROCEDURE
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;}
        }
    }
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {printf("%d ", arr[i]);}
    printf("\n");

    //BINARY SEARCH PROCEDURE
    printf("Enter number to search: ");
    scanf("%d", &key);
    int low = 0, high = n-1, mid;
    int found = 0;
    while (low <= high) { mid = (low + high) / 2;
        if (arr[mid]==key) {printf("Element found at index %d\n", mid);
            found = 1; break;}
        else if (arr[mid] < key) {low = mid + 1;}
        else {high = mid - 1;}
    }
    if (!found) {printf("Element not found\n");}
    return 0;
}
