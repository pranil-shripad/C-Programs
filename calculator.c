#include <stdio.h>

int main(){
    int a, b;
    char sw;

    printf("Enter operator: 1.Addition, 2.Subtraction, 3.Multiplication, 4.Divosion: ");
    scanf("%d", &sw);
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    switch (sw)
    {
    case 1:
        printf("Sum of a and b is: %d", a+b);
        break;
    case 2:
        printf("Difference of a and b is: %d", a-b);
        break;
    case 3:
        printf("Multiplication of a and b is: %d", a*b);
        break;
    case 4:
        printf("Sum of a and b is: %d", a/b);
        break;
    
    default:
        printf("Invalid input!!");
        break;
    }

    return 0;
}