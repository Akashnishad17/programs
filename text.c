#include<stdio.h>
main()
{
    FILE *fp;
    char ch[10];
    fp=fopen("c_30.txt","r");
    while(fgets(ch,10,fp)!=NULL)
        printf("%s",ch);
    fclose(fp);
}
