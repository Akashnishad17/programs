#include<stdio.h>
int add(int x,int y);
int main()
{
int x,y,z;
printf("Enter two number\n");
scanf("%d %d",&x,&y);
z=add(x,y);
printf("Sum is %d",z);
}
int add(int x,int y)
{
int sum;
sum=x+y;
return sum;
}
