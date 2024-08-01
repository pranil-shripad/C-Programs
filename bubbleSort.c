#include <stdio.h>

int main(){
    int arr[10], pass = 0;
    for(int i = 0; i<10; i++){
        printf("Enter index[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<10; i++){
        int temp;
        if(arr[i]>arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        else{
            continue;
        }
        pass++;
    }
    printf("sorted Array is:\n");
    for(int i = 0; i<10; i++){
        printf("%d, ",arr[i]);
    }
    printf("Number of passes = %d", pass);
    return 0;
}