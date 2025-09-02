/* Write a program containing functions which counts the number of positive
integers in an array.
*/

#include<stdio.h>

int pos_count(int arr[], int);

int pos_count(int arr[], int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            count++;
        }
    }
    return count;
    
}
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    
    for(int i=0;i<n; i++){
        printf("Enter the %d element: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("The number of positive number is: %d ", pos_count(arr,n));
}