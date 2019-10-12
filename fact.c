#include<stdio.h>
int fact(int ,int );
int main()
{
int n,f=1;
printf("Enter the number\n");
scanf("%d",&n);
fact(n,f);
}
int fact(int n,int f)
{
if(n>0)
{
f=f*n;
n--;
return fact(n,f);
}
else
{
printf("Factorial of the given no is %d",f);
return 0;
}
}
