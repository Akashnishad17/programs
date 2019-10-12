#include<stdio.h>
int main()
{
char ch;
printf("Akash Nishad\n R172217005\n");
printf("Enter an alphabet\n");
scanf("%c",&ch);
switch(ch)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
printf("The character %c is a vowel",ch);
break;
default:
printf("The character %c is a consonant",ch);
}
return 0;
}
