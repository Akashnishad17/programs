#include<stdio.h>
int main()
{
    int a[100],b=0,n,i;
    printf("Enter the range of numbers\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(b<a[i])
            b=a[i];

    }
    printf("Biggest no is %d",b);
    return 0;
}
