#include<stdio.h>
int main()
{
int n,a[100],i,b;
printf("Enter the number of binary inputs\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter binary no %d :",i+1);
    scanf("%d",&a[i]);
}
printf("Enter a binary number for search: ");
scanf("%d",&b);
for(i=0;i<n;i++)
{
    if(b==a[i])
    {
        printf("Implemented binary search no is %d\n",a[i]);
        exit (0);
    }
    else
        printf("%d binary does not matches with %d binary no\n",b,a[i]);
}
return 0;
}
