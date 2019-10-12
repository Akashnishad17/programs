#include<stdio.h>
int main()
{
int n,rem,s=0,m;
printf("Akash NIshad\n R172217005\n");
printf("Enter a Number\n");
scanf("%d",&n);
m=n;
while(n>0)
{
rem=n%10;
s=s*10+rem;
n=n/10;
}
printf("Reverse of the no %d is %d",m,s);
return 0;
}
