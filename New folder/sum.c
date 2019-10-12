#include<stdio.h>
int main()
{
int n,s=0,i;
printf("Enter the range of the numbers\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
s=s+i;
}
printf("Sum of the numbers is %d",s);
return 0;
}
