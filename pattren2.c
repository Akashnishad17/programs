#include<stdio.h>
int main()
{

int i,j,n,k,s,t;
printf("Enter a number :");
scanf("%d",&n);
s=n;
for(i=1;i<=n;i++)
{
    t=1;
    for(j=1;j<=s;j++)
    {
    printf("  ");
    }
    for(k=1;k<=2*i-1;k++)
    {
        if(k<=(2*i)/2)
        {
        printf("%d ",t);
        if(k<(2*i)/2)
        t++;
        }
        else
        {
            t--;
            printf("%d ",t);
        }
    }
    printf("\n");
    s--;
}
return 0;
}
