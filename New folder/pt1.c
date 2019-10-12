#include<stdio.h>
int main()
{
int i,j,n,k=0;
printf("Enter tne no of the rows\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n");
k=k+1;
for(j=1;j<=i;j++)
{
printf("%d ",k);
}
}
return 0;
}
