#include<stdio.h>

int main(){
    int i,factorial=1,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        factorial = factorial *i;
    }
    printf("Factorial is : %d",factorial);
    return 0;
}