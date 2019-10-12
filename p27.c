#include<stdio.h>
int main()
{
float s=0,n,i;
printf("Akash Nishad\n R172217005\n");
printf("Enter the number\n");
scanf("%f",&n);
for(i=1;i<=n;i++)
s=s+(1/i);
printf("Sum of the series of the inverse of the number upto is %f is %f",n,s);
return 0;
}
