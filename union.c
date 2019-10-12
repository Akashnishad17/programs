union employee
{
    int id;
    char name[20];
    float sal;
}s;
main()
{
    printf("%d",sizeof(s));
    s.id=5;
    s.sal=5000.000000;
    printf("%d %f",s.id,s.sal);
}
