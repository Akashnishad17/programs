#include<stdio.h>
int main()
{
long b1,b2,s1=0,s2=0,base=1,s,a,b,c,d,e,f,g,h;
printf("Akash Nishad\n R172217005\n");
printf("Enter the two binary number\n");
scanf("%ld %ld",&b1,&b2);
while(b1>0)
{
s1=s1+(b1%10)*base;
b1=b1/10;
base=base*2;
}
base=1;
while(b2>0)
{
s2=s2+(b2%10)*base;
b2=b2/10;
base=base*2;
}
s=s1+s2;
a=s%2;
s=s/2;
b=s%2;
s=s/2;
c=s%2;
s=s/2;
d=s%2;
s=s/2;
e=s%2;
s=s/2;
f=s%2;
s=s/2;
g=s%2;
s=s/2;
h=s%2;
printf("sum of the binary no is %ld%ld%ld%ld%ld%ld%ld%ld",h,g,f,e,d,c,b,a);
return 0;
}
