#include<stdio.h>
int main()
{
    int i;
    FILE *fp;
    char s[]="HELLO WORDS";
    fp=fopen("d1.txt","r");
    if(fp==NULL){
            printf("File can't open");
            exit(1);
    }
    for(i=0;i<strlen(s);i++)
        fputc(s[i],fp);
    fclose(fp);

}
