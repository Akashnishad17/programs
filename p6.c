#include<stdio.h>
int main()
{
int n,s=0,j,a;
printf("Akash Nishad\n R172217005\n");
printf("Enter the number \n");
scanf("%d",&n);
a=n;
while(n>0)
{
j=n%10;
s=s+j*j*j;
n=n/10;
}
if(s==a)
{
printf("Given no %d is armstrong no",a);
}
else
{
printf("Given no %d is not an armstrong no",a);
}
return 0;
}
