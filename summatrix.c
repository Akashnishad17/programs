#include<stdio.h>
int main()
{
    int n1[100][100],n2[100][100],i,j;
    printf("Enter the elements of matrix\n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            scanf("%d",&n1[i][j]);
        }
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            scanf("%d",&n2[i][j]);
        }
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d  ",n1[i][j]);
        }
        printf("\n");
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d  ",n2[i][j]);
        }
        printf("\n");
    }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
        printf("%d  ",n1[i][j]+n2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
