#include<stdio.h>
main()
{
int n;
printf("Enter the number\n");
scanf("%d",&n);
if(n==1)
    printf("Red\n");
else if(n==2)
    printf("Orange\n");
else if(n==3)
    printf("Yellow\n");
else if(n==4)
    printf("Green\n");
else if(n==5)
    printf("Indigo\n");
else if(n==6)
    printf("Blue\n");
else if(n==7)
    printf("Violet\n");
else
    printf("No colour\n");
return 0;
}
