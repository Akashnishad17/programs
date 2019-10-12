#include<stdio.h>
int main()
{
int n,t,rem,s=0;
printf("Akash Nishad\n R172217005\n");
printf("Enter a number\n");
scanf("%d",&n);
t=n;
while(n>0)
{
rem=n%10;
s=s*10+rem;
n=n/10;
}
if(s==t)
{
printf("Given no %d is a palindrome no",t);
}
else
{
printf("Given no %d is not a pelindrome no",t);
}
return 0;
}
