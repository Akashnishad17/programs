#include<stdio.h>
int main()
{
int n,i,s;
printf("enter the no.\n");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
s=i*n;
printf("%d*%d=%d\n",n,i,s);
}
return 0;
}
