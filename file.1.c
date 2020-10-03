#include<stdio.h>
int main()
{
    int i;
    FILE *fp;
    char s[]="MRINMOY BISWAS";
    fp=fopen("f1.txt","W");
    if(fp==NULL)
    {
        printf("file can't open ");
        exit(1);
    }
    for(i=0;i<strlen(s);i++)
        fputc(s[i],fp);
    fclose(fp);
}
