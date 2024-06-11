#include <stdio.h>

int main(){
    int arr[5],i,sum=0;
    for(i=0;i<5;i++){
        printf("Enter number for arr[%d]: ",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("Sum of all array elements is: %d",sum);
}