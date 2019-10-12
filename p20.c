#include<stdio.h>
int main()
{
int n,rem,s=0;
printf("Akash Nishad\n R172217005\n");
printf("Enter a number\n");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
s=s+rem;
n=n/10;
}
printf("Sum of the digit of the no is %d",s);
return 0;
}


