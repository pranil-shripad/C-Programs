// SWAP NUMBS BY 'CALL BY VALUE'
#include <stdio.h>

void swap(int a, int b);

int main(){
    int a, b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    swap(a,b);
    return 0;

}

void swap(int a, int b){
    int temp;
    printf("Numbers before swapping are: a = %d, b = %d\n",a,b);
    temp = a;
    a = b;
    b = temp;
    printf("Numbers After Swapping are: a = %d, b = %d", a, b);

}