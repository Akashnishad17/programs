//Implement the functionality of strlen() without using it. Use strrev() to reverse the given string and concatenate it with the initial string using strcat().
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],s1[20];
    int i,l=0;
    printf("Enter any string :");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        l++;
    }
    strcpy(s1,s);
    printf("Length of the string %s is %d\n",s,l);
    printf("Reverse of string is %s\n",strrev(s));
    printf("Concatenate of two string is %s",strcat(s1,s));
    return 0;
}

