#include <stdio.h>

int main() {
    int arr[100], n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;  
    printf("\nArray in reverse order:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", *(ptr + i));   
    }

    printf("\n");
    return 0;
}





