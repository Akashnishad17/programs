#include<stdio.h>
int main()
{
long a,b;
int i,b1[10],b2[10],s[10];
printf("Enter the two binary number\n");
scanf("%ld %ld",&a,&b);
for(i=1;i<=10;i++)
{
b1[i]=a%10;
a=a/10;
b2[i]=b%10;
b=b/10;
}
for(i=1;i<=10;i++)
{
if(b1[i]==1 && b2[i]==1)
s[i]=1;
else
s[i]=b1[i]+b2[i];
}
printf("Sum of the two binary no is ");
for(i=10;i>=1;i--)
{
printf("%d",s[i]);
}
return 0;
}
