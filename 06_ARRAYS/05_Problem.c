// Write a program containing a function which reverses the array passed to it.

#include <stdio.h>

void reverse(int arr[], int);

void reverse(int arr[], int n){
    int temp;
    printf("\nReverse array: " );
    for (int i = 0; i < n/2; i++)
    {
        temp= arr[i];
        arr[i]= arr[n-i-1];
        arr[n-i-1]=temp;
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    int temp;
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element: ", i+1);
        scanf("%d", &arr[i]);
    
    }

    printf("Original Array: " );
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    reverse(arr,n);
     for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
     
    return 0;
}