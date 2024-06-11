#include <stdio.h>

void printNamaste();
void printBonjour();
char country;

int main(){
    printf("Which Country do you belong to? (i/f): ");
    scanf("%c",&country);

    if (country == 'i'){
        printNamaste();
    }
    else{
        printBonjour();
    }
}

void printNamaste(){
    printf("Namaste!");
}
void printBonjour(){
    printf("Bonjour!");
}