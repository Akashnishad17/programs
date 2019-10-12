#include<stdio.h>
int fact(int k);
int main()
{
int k,f;
scanf("%d",&k);
if(k==1)
{
f=fact(k);
printf("%d",f);
return 1;
}
else
return k*fact(k-1);
}
