#include<stdio.h>
int main()
{
float a,b;
int n;
A:
printf("Enter two number\n");
scanf("%f %f",&a,&b);
printf("Enter\n1 for add\n2 for subtract\n3 for product\n4 for division\n");
scanf("%d",&n);
switch(n)
{
case 1:
    {
        printf("%f+%f=%f\n",a,b,a+b);
        break;
    }
case 2:
    {
        printf("%f-%f=%f\n",a,b,a-b);
        break;
    }
case 3:
    {
        printf("%f*%f=%f\n",a,b,a*b);
        break;
    }
case 4:
    {
        printf("%f/%f=%f\n",a,b,a/b);
        break;
    }
default:
    {
        printf("No operation\n");
        break;
    }
}
int m;
printf("press 1 to perform action again\n");
scanf("%d",&m);
switch(m)
{
    case 1: goto A;
    default: printf("Operation is ended\n");
             break;
}
return 0;
}
