#include<stdio.h>
int main()
{
    int n1[100][100],n2[100][100],m[100][100],i,j,k,s=0;
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
            for(k=1;k<=3;k++)
            {
        s=s+n1[i][k]*n2[k][j];
            }
        m[i][j]=s;
        s=0;
        }

    }
        for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d  ",m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
