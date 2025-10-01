// Write a function to sort an array

#include <stdio.h>

int arrsort(int arr[],int size){
    int temp,i;
    for (i=0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if (arr[j]<arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int n,i;
    printf("Enter the number of elements: "); scanf("%d",&n);
    int arr[n];

    for (i=0;i<n;i++){
        printf("Enter element %d:",i+1); scanf("%d",&arr[i]);
    }
    printf("Original Array: ");
    for (i=0;i<n;i++){
        if (i==n-1){
            printf("%d",arr[i]);
        }
        else{
            printf("%d, ",arr[i]);
        }
    }

    arrsort(arr,n);
    printf("\nSorted Array: ");
    for (i=0;i<n;i++){
        if (i==n-1){
            printf("%d",arr[i]);
        }
        else{
            printf("%d, ",arr[i]);
        }
    }
}