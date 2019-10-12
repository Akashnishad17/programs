#include<stdio.h>
int main()
{
    int n[100][100],i,j;
    printf("Enter the elements of matrix\n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
    printf("\nThe matrix form is\n\n");
        for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d  ",n[i][j]);
        }
        printf("\n");
    }
    printf("And the transpose of matrix is\n\n");

            for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d  ",n[j][i]);
        }
        printf("\n");
    }
    return 0;
}
