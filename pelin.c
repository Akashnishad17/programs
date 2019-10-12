#include<stdio.h>
main()
{
int i,n,t;
printf("Enter the number\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    t=i;
    while(t>0)
    {
        printf("%d",t%10);
        t=t/10;
    }
    printf("\n");
}
return 0;
}
