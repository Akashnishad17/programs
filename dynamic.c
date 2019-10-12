#include<stdio.h>
#include<stdlib.h>
struct emp
{
    int id;
    char name[20];
    float sal;
};
struct emp *ptr;
int main()
{
    ptr=(struct emp*)malloc(sizeof (struct emp));
    if(ptr==NULL)
        printf("Out of memory");
    else
    {
        printf("Enter data to node");
        scanf("%d %s %f",&ptr->id,&ptr->name,&ptr->sal);
        printf("%d %s %f",ptr->id,ptr->name,ptr->sal);
    }
    return 0;
}
