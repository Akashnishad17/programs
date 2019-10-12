#include<stdio.h>
int main()
{
    int A[3][2],B[2][3],C[3][3],T[3][3];
    int i,j,k;
    printf("Enter the elements of Matrix A\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
            scanf("%d",&A[i][j]);
    }
    printf("Enter the elements of Matrix B\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&B[i][j]);
    }
    printf("Enter the elements of Matrix C\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&C[i][j]);
    }
    printf("Matrix A is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
            printf("%d\t",A[i][j]);
            printf("\n");
    }
    printf("Matrix B is\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",B[i][j]);
            printf("\n");
    }
    printf("Matrix C is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",C[i][j]);
            printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
                T[i][j]=0;
                for(k=0;k<2;k++)
                {
                    T[i][j]=T[i][j]+A[i][k]*B[k][j];
                }
            }
    }
    printf("The operations for the matrices A*B+C is\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d\t",T[i][j]+C[i][j]);
            printf("\n");
    }
    return 0;
}
