#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[20];
    int age;
    int height;
    int date,month,year;
    int roll;
}record[10];
int main()
{
    int i,s=0;
    float avg;
    for(i=0;i<10;i++)
    {
        printf("Enter data of student %d\n",i+1);
        printf("Enter name:");
        gets(record[i].name);
        printf("Enter age:");
        scanf("%d",&record[i].age);
        printf("enter height in cm:");
        scanf("%d",&record[i].height);
        printf("Enter date of birth:");
        scanf("%d/%d/%d",&record[i].date,&record[i].month,&record[i].year);
        printf("Enter Roll Number:");
        scanf("%d",&record[i].roll);
        s=s+record[i].height;
    }
    avg=s/10;
    printf("Average height of the students is %f",avg);
    return 0;
}

