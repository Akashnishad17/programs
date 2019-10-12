#include<stdio.h>
long fact(int n);
int main()
{
int n,i,j,k,s;
printf("Enter the no rows\n");
scanf("%d",&n);
s=n-1;
for(i=0;i<n;i++)
{
for(j=1;j<=s;j++)
printf(" ");
s--;
for(k=0;k<=i;k++)
{
printf("%ld ",fact(i)/(fact(k)*fact(i-k)));
}
printf("\n");
}
return 0;
}
long fact(int n)
{
int l;
long f=1;
for(l=1;l<=n;l++)
f=f*l;
return f;
}
