#include<stdio.h>
int option(int ,int);
int main()
{
int a,b,t;
A:
printf("Enter the number\n");
scanf("%d %d",&a,&b);
option(a,b);
printf("Press 1 to do it again\n");
scanf("%d",&t);
if(t==1)
{goto A;}
else
return 0;
}
int option(int a,int b)
{
int n;
printf("Enter\n1 for add\n2 for subtract\n3 for product\n");
scanf("%d",&n);
if(n==1)
    {printf("%d+%d=%d\n",a,b,a+b);}
else if(n==2)
    {printf("%d-%d=%d\n",a,b,a-b);}
else if(n==3)
    {printf("%d*%d=%d\n",a,b,a*b);}
else
    {printf("No option is selected\n");}
}
