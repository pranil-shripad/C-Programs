#include<stdio.h>
#include<string.h>

struct employee{
    char Name[50];
    char Department[100];
};

int main(){
    struct employee e1;
    printf("Enter name: ");
    scanf("%s", &e1.Name);
    printf("Enter Department: ");
    scanf("%s", &e1.Department);

    printf("Employee Details:\n");
    printf("Name: %s\n", e1.Name);
    printf("Department: %s\n", e1.Department);
    
}