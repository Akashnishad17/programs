#include<stdio.h>
int main()
{
    int i,a[50],n,x;
    printf("Enter the range of the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element number %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter a element for searching:");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("The searched number %d is at number %d\n",a[i],i+1);
            break;
        }
        else
            printf("The number %d does not match\n",a[i]);
    }
    return 0;
}
