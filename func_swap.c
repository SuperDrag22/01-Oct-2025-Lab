// WAP to make function to swap two numbers using call by reference

#include <stdio.h>

void swapnum(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a,b;
    printf("Enter the value of a: "); scanf("%d",&a);
    printf("Enter the value of b: "); scanf("%d",&b);

    swapnum(&a,&b);

    printf("\nnew value of a: %d",a);
    printf("\nnew value of b: %d",b);
}