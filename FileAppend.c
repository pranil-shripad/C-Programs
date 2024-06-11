// file append
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    char str[80];
    fp = fopen("text1.txt", "a");
    printf("Enter your message:");
    gets(str);
    fprintf(fp, "%s", str);
    printf("Your message is appended in text1.txt file.");
    fclose(fp);
    return 0;
}