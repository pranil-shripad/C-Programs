// Copy string into a file
#include<stdio.h>

int main(){
    FILE *fptr;
    char text[] = "Hello, Pranil here!";

    fptr = fopen("output.txt","w");
    if (fptr == NULL){
        printf("File did not open!");
        return 1;
    }
    fputs(text,fptr);
    fclose(fptr);
    printf("File written Successsfully!");
    return 0;
}