#include<stdio.h>
int main()
{
int i,j,k,n,s,t=1;
printf(" Akash Nishad\n R172217005\n");
printf("Enter the no of the rows\n");
scanf("%d",&n);
s=n-1;
for(i=1;i<=n;i++)
{
for(j=1;j<=s;j++)
{
printf(" ");
}
s=s-1;
k=t;
while(k>0)
{
printf("%d ",k%10);
k=k/10;
}
t=t*11;
printf("\n");
}
return 0;
}
