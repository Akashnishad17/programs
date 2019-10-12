#include <stdio.h>
int main()
{
int number,rem,sum=0,i;
printf(" Akash Nishad\n R172217005\n");
printf("Enter a Number\n");
scanf("%d", &number);
for(i=1;i<=number-1;i++)
{
rem=number%i;
if(rem==0)
{
sum=sum+i;
}
}
if(sum==number)
printf("Entered Number %d is perfect number",number);
else
printf("Entered Number %d is not a perfect number",number);
return 0;
}
