// STRUCTURE BY ARROW OPERATOR
#include <stdio.h>
struct student
{
    char name[20];
    int number;
    int rank;
};

int main(){
    struct student variable;
    printf("Enter name: ");
    scanf("%s", &variable.name);
    printf("Enter number: ");
    scanf("%d", &variable.number);
    printf("Enter rank: ");
    scanf("%d", &variable.rank);
    
    struct student *ptr;
    ptr = &variable;
    printf("NAME: %s\n", ptr->name);
    printf("NUMBER: %d\n", ptr->number);
    printf("RANK: %d", ptr->rank);
    return 0;
}
