#include<stdio.h>
#include<conio.h>
#include<math.h>
int main( )
{
int a,b,n,s1=0,s2=0,d;
printf("Akash Nishad\n R172271005\n");
printf("Enter a Number\n");
scanf("%d",&n);
a=n;
b=n/10;
while(a>0)
{
s1=s1+(a%10);
a=a/10;
}
while(b>0)
{
s2=s2+(b%10);
b=b/10;
}
d=abs(s1-s2);
if(11%d==0)
printf("The number is divisible by 11");
elsea
printf("The number is not divisible by 11");
return 0;
}


