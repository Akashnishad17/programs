void fun(int*);
main()
{
int i=10,*p=&i;
fun(p++);
}
void fun(int *p)
{
    printf("%d",*p);
}
