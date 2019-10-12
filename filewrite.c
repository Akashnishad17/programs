#include<stdio.h>
main()
{
    char s[30];
    FILE *fp;
    fp=fopen("a.txt","w");
    printf("Enter data:");
    gets(s);
    fputs(s,fp);
    fclose(fp);
}
