#include<stdio.h>
int main()
{
int i,n,rem,s;
printf("Akash Nishad\n R172217005\n");
for(i=1;i<=1000;i++)
{
s=0;
n=i;
while(n>0)
{
rem=n%10;
s=s+rem*rem*rem;
n=n/10;
}
if(s==i)
printf("Armstrong no is %d\ns",i);
}
return 0;
}

