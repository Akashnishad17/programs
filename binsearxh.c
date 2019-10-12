#include<stdio.h>
int main()
{
    int a[10],j,i,n,x,t,start,end,mid;
    printf("Enter the range of the numbers:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element number %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i;j<n;j++)
            if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    printf("Enter an element for searching:");
    scanf("%d",&x);
    start=0;
    end=n-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(a[mid]==x)
        {
            printf("Searched number %d is at %d\n",a[mid],mid+1);
            break;
        }
        else if(x<a[mid])
            end=mid-1;
        else if(x>a[mid])
            start=mid+1;
        else
            printf("Number doe not match\n");
    }
    return 0;
}
