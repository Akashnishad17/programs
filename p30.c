#include<stdio.h>
int main()
{
int n,o;
printf("Akash Nishad\n R172217005\n");
A:
printf("Enter a number\n");
scanf("%d",&n);
if(n==0)
printf("Given no is Zero\n");
else
{
if(n>0)
printf("Given no %d is positive\n",n);
else
printf("Given no %d is negative\n",n);
}
printf("Press 1 to perform the action again\n And any key to exit\n");
scanf("%d",&o);
switch(o)
{
case 1:goto A;
break;
default:printf("You have exit the program");
}
return 0;
}
