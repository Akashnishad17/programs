#include<stdio.h>
int main()
{
int x1,x2,x3,y1,y2,y3;
scanf("%d %d",&x1,&y1);
scanf("%d %d",&x2,&y2);
scanf("%d %d",&x3,&y3);
if((y3-y1)*(x2-x1)==(x3-x1)*(y2-y1))
printf("All the points are on the same line");
else
printf("Points are not in same line");
return 0;
}
