#include<stdio.h>
int main()
{
int n,i,j,k,s,a;
printf("enter the range\n");
scanf("%d",&n);
s=n-1;
for(i=1;i<=n;i++)
{
for(a=1;a<=s;a++)
{
printf("  ");
}
s=s-1;
for(j=1;j<=i;j++)
{
for(k=1;k<=j;k++)
{
printf("* ");
}
}
printf("\n");
}
return 0;
}
