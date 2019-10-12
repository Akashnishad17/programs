#include<stdio.h>
int main()
{
float a,b;
int n;
printf("Akash Nishad\n R172217005\n");
printf("Enter two numbers\n");
scanf("%f %f",&a,&b);
printf("Enter\n 1 for add\n 2 for subtract\n 3 for product\n 4 for division\n");
scanf("%d",&n);
switch(n)
{
case 1:printf("%f+%f=%f",a,b,a+b);
break;
case 2:printf("%f-%f=%f",a,b,a-b);
break;
case 3:printf("%f*%f=%f",a,b,a*b);
break;
case 4:printf("%f/%f=%f",a,b,a/b);
break;
default:printf("Invalid operation");
}
return 0;
}
