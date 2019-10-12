#include<stdio.h>
int main()
{
int i,j,n,k=0;
printf("Akash Nishad\n R172217005\n");
printf("Enter tne no of the rows\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n");
for(j=1;j<=i;j++)
{
k=k+1;
printf("%d ",k);
}
}
return 0;
}
