#include<stdio.h>
int swap(int a,int b);
int main()
{
int a=10,b=20;
swap(a,b);
return 0;
}
int swap(int a,int b)
{
int temp,*p1,*p2;
*p1=a;
*p2=b;
temp=*p1;
*p1=*p2;
*p2=temp;
return swap(a,b);
}
