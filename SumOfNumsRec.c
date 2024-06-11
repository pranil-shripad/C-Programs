// SUM OF NUMBERS OF FIRST N NUMBERS USING RECCURSION
#include <stdio.h>

int sum(int num);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of first %d numbers is : %d", n, sum(n));
}

int sum(int num){
    if (num != 0){
        return num + sum(num - 1);
    }
    else{
        return num;
    }
}