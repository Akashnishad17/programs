#include<stdio.h>
int main()
{
int i=0,n,j=1,k,a;
printf("Enter the number of terms\n");
scanf("%d",&n);
for(a=1;a<=n;a++)
{
printf("%d\n",i);
k=i+j;
i=j;
j=k;
}
return 0;
}
