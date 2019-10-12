#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a[6][10],ch;
    int i,*p[6];
    for(i=0;i<6;i++)
    p[i]=&a[i];
    for(i=0;i<6;i++)
    {
        printf("Enter data to the string %d:",i+1);
        scanf("%s",&a[i]);
    }
    for(i=0;i!='\0';i++)
    {
       ch=a[0][i];
       a[0][i]=a[1][i];
       a[1][i]=ch;
    }
    printf("%s\n%s",a[0],a[1]);
    return 0;
}
