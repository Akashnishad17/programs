#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i<=n/2)
            {
            if(j>=(n+1)/2+2-i && j<=n/2+i)
                printf("  ");
             else
                printf("* ");
        }
            if(i>n/2)
            {
            if(j>=(n+1)/2+1+i-n && j<=n/2-i-1+n)
                printf("  ");
             else
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}
