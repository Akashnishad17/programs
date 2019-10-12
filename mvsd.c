#include<stdio.h>
#include<math.h>
int main()
{
    int a[100],i,n,sum1=0,sum2=0,square;
    float mean,var,std,temp;
    printf("Enter the range of numbers\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum1=sum1+a[i];
        sum2=sum2+a[i]*a[i];
    }
    mean=sum1/n;
    square=sum1*sum1;
    temp=square/n;
    temp=sum2-temp;
    var=temp/(n-1);
    std=sqrt(var);
    printf("Mean is %f\nVariance is %f\nStandard Deviation is %f",mean,var,std);
    return 0;
}
