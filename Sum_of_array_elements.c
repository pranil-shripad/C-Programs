// WAP to declare array of 5 elements and display sum of all elements

#include <stdio.h>

int main(){
    int arr[5],i,sum=0;
    printf("Enter 5 integers: ");

    for(i=0;i<5;+i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("Sum of all elements is: %d", sum);

    return 0;
}