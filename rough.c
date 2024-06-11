// C program to implement
// the puts() function
#include <stdio.h>
// Driver code
int main()
{
 char name[50];
 printf("Enter your text: ");
 // Reads string from user
 gets(name);
 printf("Your text is: ");
 // Displays string
 puts(name);
 return 0;
}