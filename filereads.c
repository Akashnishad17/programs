#include<stdio.h>
main()
{
    FILE *fp;
    char s[10];
    fp=fopen("a.txt","r");
    if(fp==NULL)
    {
        printf("File is found\n");
        exit(1);
    }
    while(fgets(s,10,fp)!=NULL)
    {
        printf("%s",s);
    }
    fclose(fp);

}


