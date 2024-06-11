#include <stdio.h>

int main(){
    FILE *fptr;
    char message[] = "hello";

    fptr = fopen("message.txt","w");
    if(fptr == NULL){
        printf("Error opening the file.\n");
        return 1;
    }
    fputs(message,fptr);
    fclose(fptr);
    printf("file written successfully!");
    return 0;
}