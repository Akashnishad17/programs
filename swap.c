#include<stdio.h>
int main()
{
int swap(int num1, int num2);
int num1,num2;
printf("Enter the two numbers\n");
scanf("%d %d",&num1,&num2);
swap(num1,num2);
printf("n1 is %d\nn2 is %d\n",num1,num2);
}
int swap(int num1, int num2)
{
int temp;
temp=num1;
num1=num2;
num2=temp;
printf("num1 is %d\nnum2 is %d\n",num1,num2);
}
