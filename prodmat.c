#include<stdio.h>
int main()
{
    int n1[100][100],n2[100][100],i,j,k,s;
    printf("Enter the elements of matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&n1[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&n2[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",n1[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",n2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            s=0;
            for(k=0;k<3;k++)
            {
                s=s+n1[i][k]*n2[k][j];
            }
            printf("%d  ",s);
        }
        printf("\n");
    }
    return 0;
}
