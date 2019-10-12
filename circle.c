#include<stdio.h>
#include<math.h>
int main()
{
int x,y,r,x1,y1,t;
scanf("%d %d %d",&x,&y,&r);
scanf("%d %d",&x1,&y1);
t=pow((x1-x),2)+pow((y1-y),2);
t=sqrt(t);
if(t==r)
printf("Lie on the circle");
else
{
if(t>r)
printf("Outside the circle");
else
printf("Inside the circle");
}
return 0;
}
