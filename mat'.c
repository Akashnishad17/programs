#include <stdio.h>
int main()
{
int t,n,j,i;
scanf("%d",&t);
scanf("%d",&n);
int a[100][100];
int sum=0;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d ",&a[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
sum+=a[i][j]*a[i][j+1];
}
}
printf("%d",sum);
return 0;
}
