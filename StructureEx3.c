// MORE STRUCTURE EXAMPLE
#include <stdio.h>
#include <string.h>

struct Student{
    char name[50];
    int age;
    float totalmarks;

};

int main(){
    struct Student s[2];
    float sum = 0, avg = 0;

    for(int i=1;i<=2;i++){
        printf("Enter name of the student: ");
        scanf("%s",&s[i].name);
        printf("Enter age of the student: ");
        scanf("%d",&s[i].age);
        printf("Enter total marks of the student: ");
        scanf("%f",&s[i].totalmarks);

        sum += s[i].totalmarks;
    }

    printf("STUDENT'S DATA:\n");

    for(int i=1;i<=2;i++){
        printf("Name of Student%d is: %s\n",i,s[i].name);
        printf("Age of the Student%d is: %d\n",i,s[i].age);
        printf("Total marks of student%d is: %.2f\n",i,s[i].totalmarks);
    }
    avg = (sum/2);
    printf("Average of both the students is: %.2f",avg);

    return 0;

}