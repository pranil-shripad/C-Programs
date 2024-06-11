#include <stdio.h>

int main(){
    int arr1[10][10], arr2[10][10], res[10][10];
    int m,n,i,j;
    printf("Enter number if rows: ");
    scanf("%d",&m);
    printf("Enter number if columns: ");
    scanf("%d",&n);

    printf("Enter elements of first matrix:\n");
    for(i=0;i<m;i++){
        for(int j=0; j<n;j++){
            printf("Enter Arr[%d][%d]: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(i=0;i<m;i++){
        for(int j=0; j<n;j++){
            printf("Enter Arr[%d][%d]: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("Sum of Matrices is:\n");
    for(i=0;i<m;i++){
        for(int j=0; j<n;j++){
            res[i][j] = arr1[i][j] - arr2[i][j];
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}