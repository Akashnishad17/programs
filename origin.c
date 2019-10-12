#include<stdio.h>
int main()
{
int x,y;
scanf("%d %d",&x,&y);
if(x==0 && y==0)
printf("origin");
else
{
if(x==0)
printf("on y axis");
else if(y==0)
printf("On x axis");
else
printf("In the xy plane");
}
return 0;
}
