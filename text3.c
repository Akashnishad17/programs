#include<stdio.h>
main()
{
    int date,month,year,i,j,r,t,g;
    B:
    printf("Enter the date : ");
    scanf("%d/%d/%d",&date,&month,&year);
    if(year<2017)
        printf("On %d/%d/%d the day was ",date,month,year);
    else if(year>2017)
        printf("On %d/%d/%d the day will be ",date,month,year);
    t=year-1900;
    g=t/4;
    t=t+g;
    if(date>31 || month>12)
    {
        printf("Invalid date");
        exit(0);
    }
    i=month;
    if(year%400==0 || year%4==0)
    {
        if(year%100==0)
            goto A;
        else
        {
    if(i==1)
        r=t;
    else if(i==2)
        r=(31)%7+t;
    else if(i==3)
        r=(31+29)%7+t;
    else if(i==4)
        r=(31+29+31)%7+t;
    else if(i==5)
        r=(31+29+31+30)%7+t;
    else if(i==6)
        r=(31+29+31+30+31)%7+t;
    else if(i==7)
        r=(31+29+31+30+31+30)%7+t;
    else if(i==8)
        r=(31+29+31+30+31+30+31)%7+t;
    else if(i==9)
        r=(31+29+31+30+31+30+31+31)%7+t;
    else if(i==10)
        r=(31+29+31+30+31+30+31+30+31)%7+t;
    else if(i==11)
        r=(31+29+31+30+31+30+31+30+31+30)%7+t;
    else if(i==12)
        r=(31+29+31+30+31+30+31+30+31+30+31)%7+t;
        }
    }
    else
    {
        A:
            if(date==29 && month==2)
            {
                printf("Invalid date");
                exit(0);
            }
    if(i==1)
        r=t;
    else if(i==2)
        r=(31)%7+t;
    else if(i==3)
        r=(31+28)%7+t;
    else if(i==4)
        r=(31+28+31)%7+t;
    else if(i==5)
        r=(31+28+31+30)%7+t;
    else if(i==6)
        r=(31+28+31+30+31)%7+t;
    else if(i==7)
        r=(31+28+31+30+31+30)%7+t;
    else if(i==8)
        r=(31+28+31+30+31+30+31)%7+t;
    else if(i==9)
        r=(31+28+31+30+31+30+31+31)%7+t;
    else if(i==10)
        r=(31+28+31+30+31+30+31+30+31)%7+t;
    else if(i==11)
        r=(31+28+31+30+31+30+31+31+30+31)%7+t;
    else if(i==12)
        r=(31+28+31+30+31+30+31+31+30+31+30)%7+t;
    }
            j=r+date;
            j=j%7;
        if(j==1)
            printf("Monday\n");
        if(j==2)
            printf("Tuesday\n");
        if(j==3)
            printf("Wednesday\n");
        if(j==4)
            printf("Thursday\n");
        if(j==5)
            printf("Friday\n");
        if(j==6)
            printf("Saturday\n");
        if(j==0)
            printf("Sunday\n");
    return 0;
}

