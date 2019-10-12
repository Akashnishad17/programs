#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch,s[20];
    int word=1,alpha=0;
    char s1[30];
    FILE *fp1;
    fp1=fopen("a.txt","w");
    printf("Enter data:");
    gets(s1);
    fputs(s1,fp1);
    fclose(fp1);
    fp=fopen("a.txt","r");
    if(fp==NULL)
    {
        printf("File Not found\n");
        exit(1);
    }
    ch=fgetc(fp);
    while(!feof(fp))
    {
        if(ch!=' ')
       alpha++;
        else
            word++;
       printf("%c",ch);
       ch=fgetc(fp);
    }
    fclose(fp);
    printf("\nNo of Alphabet in the file is %d\n",alpha);
    printf("No of Words in the file is %d",word);
    return 0;
}
