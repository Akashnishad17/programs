#include<stdio.h>
int main()
{
int a,b,c;
printf("Akash NIshad\n R172217005\n");
printf("Enter three Numbers\n");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
{
printf("Greatest no is %d",a);
}
else
{
if(b>c)
{
printf("Greatest no is %d",b);
}
else
{
printf("Greatest no is %d",c);
}
}
return 0;
}
