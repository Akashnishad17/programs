#include<stdio.h>
main()
{
int date,i,j;
char month[10];
printf("Enter the date and month\n");
scanf("%d %s",&date,&month);
printf("%d %s\n",date,month);
if(month=="jan")
    printf("Tuesday");
return 0;
}
