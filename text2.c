#include<stdio.h>
main()
{
    int date,month,year,i,j,r=0;
    printf("Enter the date : ");
    scanf("%d/%d/%d",&date,&month,&year);
    printf("Date is %d/%d/%d\n",date,month,year);
    if(date>31 || month>12)
    {
        printf("Invalid date");
        exit(0);
    }
    i=month;
    if(i==2)
        r=(31)%7;
    else if(i==3)
        r=(31+28)%7;
    else if(i==4)
        r=(31+28+31)%7;
    else if(i==5)
        r=(31+28+31+30)%7;
    else if(i==6)
        r=(31+28+31+30+31)%7;
    else if(i==7)
        r=(31+28+31+30+31+30)%7;
    else if(i==8)
        r=(31+28+31+30+31+30+31)%7;
    else if(i==9)
        r=(31+28+31+30+31+30+31+30)%7;
    else if(i==10)
        r=(31+28+31+30+31+30+31+30+31)%7;
    else if(i==11)
        r=(31+28+31+30+31+30+31+30+31+30)%7;
    else if(i==12)
        r=(31+28+31+30+31+30+31+30+31+30+31)%7;
        if(i==1 || i==3 || i==5 || i==7 || i==9 || i==11 || i==12)
        {
            j=r+date;
            j=j%7;
        }
        else if(i==4 || i==6 || i==8 || i==10)
        {
            j=r+date;
            j=j%7;
        }
        else
        {
            j=r+date;
            j=j%7;
        }
        if(date==29 && month==2)
        {
            printf("No date exist");
            exit(0);
        }
        if(j==2)
            printf("Monday\n");
        if(j==3)
            printf("Tuesday\n");
        if(j==4)
            printf("Wednesday\n");
        if(j==5)
            printf("Thursday\n");
        if(j==6)
            printf("Friday\n");
        if(j==0)
            printf("Saturday\n");
        if(j==1)
            printf("Sunday\n");
    return 0;
}
