#include<stdio.h>
int main()
{
    int i,j,n,a[100][100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
            for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i][j]==0)
                printf("1  ");
            else
                printf("0  ");
        }
        printf("\n");
    }
    return 0;
}
