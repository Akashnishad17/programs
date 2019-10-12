#include<stdio.h>
int main()
{
int i;
printf("Mon   Tues  Wed   Thurs Fri   Sat   Sun\n");
for(i=1;i<=7;i++)
printf("%d     ",i);
printf("\n");
printf("8     9     ");
for(i=10;i<=14;i++)
printf("%d    ",i);
printf("\n");
for(i=15;i<=21;i++)
printf("%d    ",i);
printf("\n");
for(i=22;i<=28;i++)
printf("%d    ",i);
return 0;
}
