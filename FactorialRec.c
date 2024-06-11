// FACTORIAL USING RECURSSION
#include <stdio.h>

int fact(int num);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of number is %d", fact(n));

    return 0;
}

int fact(int num)
{
    if (num == 0){
        return 1;
    }
    else if (num == 1){
        return 1;
    }
    else{
        return num * fact(num - 1);
    }
}