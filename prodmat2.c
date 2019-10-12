#include<stdio.h>
int main()
{
    int n1[100][100],n2[100][100],col1,col2,row1,row2,i,j,k,s;
    printf("Enter the rows and column of 1st matrix\n");
    scanf("%d %d",&row1,&col1);
    printf("Enter the rows and column of 2nd matrix\n");
    scanf("%d %d",&row2,&col2);
    if(col1>row2 || col1<row2)
    {
        printf("The product of these two matrix is not possible");
        exit (1);
    }
    printf("Enter the elements of 1st matrix\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%d",&n1[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            scanf("%d",&n2[i][j]);
        }
    }
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            printf("%d  ",n1[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("%d  ",n2[i][j]);
        }
        printf("\n");
    }
    printf("Product of the matrices is\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            s=0;
            for(k=0;k<row2;k++)
            {
                s=s+n1[i][k]*n2[k][j];
            }
            printf("%d  ",s);
        }
        printf("\n");
    }
    return 0;
}
