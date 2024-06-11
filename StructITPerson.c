#include <stdio.h>
#include <string.h>

struct ITPerson {
    char name[100];
    int age;
    float salary;
};

int main(){
    struct ITPerson p[2];
    float avgsum = 0, avg= 0;

    for(int i=0; i<2; i++){
        printf("Enter Name of employee %d: ",i+1);
        scanf("%s",p[i].name);
        printf("Enter age of employee %d: ",i+1);
        scanf("%d",&p[i].age);
        printf("Enter Salary %d: ",i+1);
        scanf("%f",&p[i].salary);
        }

    for(int j=0; j<2; j++){
        printf("Name: %s\n", p[j].name);
        printf("Age: %d\n", p[j].age);
        printf("Salary: %.2f\n", p[j].salary);
    }

    for(int k=0;k<2;k++){
        avgsum += p[k].salary;
    }
    avg = avgsum/2;
    printf("Average is: %.2f",avg);
    return 0;
}