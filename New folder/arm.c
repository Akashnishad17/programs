#include<stdio.h>
int main()
{
int n,s=0,j,a;
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
printf("Given no is armstrong no");
}
else
{
printf("Given no is not an armstrong no");
}
return 0;
}
