#include<stdio.h>
struct strstudent
{
    int id;
    char name[10];
    float marks;
}x;
union unistudent
{
    int id;
    char name[10];
    float marks;
}y;
main()
{
    printf("Size of x is %d\n",sizeof(x));
    printf("Size of y is %d\n",sizeof(y));
    printf("Enter id and name in structure form\n");
    scanf("%d %s",&x.id,&x.name);
    printf("Enter id and name in union form\n");
    scanf("%d %s",&y.id,&y.name);
    printf("In structure form\nid is %d and name is %s\n",x.id,x.name);
    printf("In union form\nid is %d and name is %s\n",y.id,y.name);
    return 0;
}
