#include <stdio.h>

void main() {
    int i, j, n, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; 

    printf("Enter the numbers: \n");

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n-1; i++) {

        for(j = 0; j < n-i-1; j++) {

            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("The sorted elemts are: \n");
    for(i = 0; i<n; i++){
        printf("%d \t", arr[i]);
    }
}
