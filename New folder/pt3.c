#include<stdio.h>
int main()
{
int i,j,k,n,s,l;
printf("Enter the no of the rows\n");
scanf("%d",&n);
s=n-1;
for(i=1;i<=n;i++)
{
for(j=1;j<=s;j++)
{
printf("  ");
}
s=s-1;
l=2*i-1;
for(k=1;k<=l;k++)
{
printf("* ");
}
printf("\n");
}
return 0;
}
