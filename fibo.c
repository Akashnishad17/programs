#include<stdio.h>
int fibonacci(int ,int ,int ,int );
int main()
{
int f,a=1,b=0,n;
printf("Enter the terms of Fibonacci series\n");
scanf("%d",&n);
printf("Fibonacci series of %d terms\n",n);
fibonacci(f,a,b,n);
}
int fibonacci(int f,int a,int b,int n)
{
if(n>0)
{
printf("%d ",b);
f=a+b;
b=a;
a=f;
n--;
return fibonacci(f,a,b,n);
}
else
getch();
}
