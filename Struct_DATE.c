#include <stdio.h>
#include<string.h>

struct DATE{
    int day;
    int month;
    int year;
};

int main(){
    struct DATE d1;
    d1.day = 10;
    d1.month = 05;
    d1.year = 2024;
    

    printf("Date : %d/%d/%d",d1.day,d1.month,d1.year);
    return 0;
}