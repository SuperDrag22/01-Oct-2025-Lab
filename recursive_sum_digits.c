// WAP to find sum of digits using recursion

#include <stdio.h>

int sumdigrec(int n){
    if (n==0){
        return 0;
    }
    else{
        return (n%10) + sumdigrec(n/10);
    }
}

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int sum = sumdigrec(num);
    printf("Sum of digits of %d is: %d",num,sum);
    return 0;
}