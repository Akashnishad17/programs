#include<stdio.h>
int main()
{
int i,f=1,num;
printf("Akash Nishad\n R172217005\n");
printf("Enter a number\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
f=f*i;
printf("Factorial of %d is %d",num,f);
return 0;
}
