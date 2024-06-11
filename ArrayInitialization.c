#include <stdio.h>

int main(){

    int arr[5];
    int i;

    for(i=0;i<5;i++){
        printf("Enter elements into array for position ['%d']: ",i);
        scanf("%d",&arr[i]);
    }
    arr[2] = 44;
    for(i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    
    return 0;
}