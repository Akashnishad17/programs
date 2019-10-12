#include<stdio.h>
main()
{
    FILE *fp;
    char ch;
    fp=fopen("a.txt","r");
    if(fp==NULL)
    {
        printf("File is found\n");
        exit(1);
    }
    ch=fgetc(fp);
    while(!feof(fp))
    {
        printf("%c",ch);
        ch=fgetc(fp);
    }
    fclose(fp);

}

