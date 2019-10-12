#include<stdio.h>
int fib(int f,int s);
int main()
{
int f=0,s=1;
fib(f,s);
printf("%d ",f);
return 1;
}
int fib(int f,int s)
{
int next,n;
printf("Enter the no. of terms\n");
scanf("%d",&n);
next=f+s;
f=s;
s=next;
}
