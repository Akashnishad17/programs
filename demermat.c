#include<stdio.h>
int col1(int* );
int col2(int* );
int col3(int* );
int main()
{
    int A[3][3],i,j,s1,s2,s3,*ptr;
    printf("Enter the elements of the matrix A\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j,3;j++)
            scanf("%d",&A[i][j]);
    }
    printf("The determinant of the matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j,3;j++)
            printf("%d  ",A[i][j]);
            printf("\n");
    }
    *ptr=A;
    s1=col1(A);
    s2=col2(A);
    s3=col3(A);
    printf("is %d",s1-s2+s3);
    return 0;
}
int col1(int x[][])
{
    int s;
    s=x[0][0]*(x[1][1]*x[2][2]-x[2][1]*x[1][2]);
    return s;
}
int col2(int x[][])
{
    int s;
    s=x[0][1]*(x[1][0]*x[2][2]-x[2][0]*x[1][2]);
    return s;
}
int col3(int x[][])
{
    int s;
    s=x[0][2]*(x[1][0]*x[2][1]-x[2][0]*x[1][1]);
    return s;
}
