//POINTER INITIALIZATION
#include <stdio.h>

int main()
{
    int var = 10;
    int *ptr;

    ptr = &var;

    printf("\n Address of var =%p", &var);
    printf("\n Address of ptr=%p", ptr);
    printf("\n Value of var=%d", var);
    printf("\n Value of ptr=%d", *ptr);
    return 0;
}