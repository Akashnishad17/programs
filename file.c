#include<stdio.h>
main()
{
    int i;
    FILE *fp;
    char s[]="Hello Students";
    fp=fopen("a.txt","w");
    if(fp==NULL)
    {
        printf("File is found\n");
        exit(1);
    }
    for(i=0;i<strlen(s);i++)
    {
        fputc(s[i],fp);
    }
    fclose(fp);

}
