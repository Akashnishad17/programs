#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10];
    printf("Enter the two strings\n");
    gets(s1);
    gets(s2);
    strcat(s1,s2);
    printf("Concatenated string is %s",s1);
    return 0;
}
