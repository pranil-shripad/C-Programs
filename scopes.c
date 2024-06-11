#include <stdio.h>
// File scope
int globalVar = 10;
void myFunction(int param)
{
    // Function scope
    int localVar = 20;
    printf("Function scope: globalVar = %d, localVar = %d\n", globalVar, localVar);
    {
        // Block scope
        int blockVar = 30;
        printf("Block scope: globalVar = %d, localVar = %d, blockVar = %d\n", globalVar, localVar,
               blockVar);
    }
}
int main()
{
    myFunction(5);
    printf("File scope: globalVar = %d\n", globalVar);
    // printf("Trying to access localVar from main: %d\n", localVar); // Error: localVar not accessible here
    return 0;
}