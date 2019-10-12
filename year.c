#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
if(n%400==0 || n%4==0)
{
if(n%100==0)
printf("Not Leap year");
else
printf("Leap year");
}
else
printf("Not a leap year");
return 0;
}
