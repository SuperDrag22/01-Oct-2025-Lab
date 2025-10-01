// WAP to find the second largest element in an array by passing the array to a function

#include <stdio.h>

int second_largest(int arr[],int size){
    if (size<2){
        printf("Array must have at least 2 elements\n");
        return -1;
    }

    int l,sec_l;

    if (arr[0]>arr[1]){
        l=arr[0];
        sec_l=arr[1];
    }
    else{
        l=arr[1];
        sec_l=arr[0];
    }

    int i;
    for (i=0;i<size;i++){
        if (arr[i]>l){
            sec_l=l;
            l=arr[i];
        }
        else if ((arr[i]>sec_l) && (arr[i]<l)){
            sec_l = arr[i];
        }
    }

    return sec_l;
}

int main(){
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];

    for (i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    int sec_large = second_largest(arr,n);
    if (sec_large != -1){
        printf("The second largest element is %d\n",sec_large);
    }
    else{
        printf("%d",sec_large);
    }

    return 0;
}