// Write Mode
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "r");

    if (fptr == NULL){
        printf("File is not opened, Program will exit now\n");
        exit(0);
    }
    else{
        printf("File created successfully!");
    }
}