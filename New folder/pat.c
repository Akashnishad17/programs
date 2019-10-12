#include<stdio.h>
int main()
{
int i,j,n;
printf("Enter tne no of the rows\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n");
for(j=1;j<=i;j++)
{
printf("* ");
}
}
return 0;
}
