#include<stdio.h>
int main()
{
int b,d=0,base=1,rem;
printf("Akash Nishad\n R172217005\n");
printf("Enter a binary number\n");
scanf("%d",&b);
while(b>0)
{
rem=b%10;
d=d+rem*base;
b=b/10;
base=base*2;
}
printf("The decimal number is %d",d);
return 0;
}
