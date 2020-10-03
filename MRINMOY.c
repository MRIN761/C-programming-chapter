#include<stdio.h>
int main()
{
    char str[10];
    FILE *fp;

    fp=fopen("Mrinmoy.txt","W");

    if(fp==NULL){
    printf("file can't open ");
    }
    else{
    printf("file found ");
    }
    while(fgets(str,9,fp)!=NULL)
    {
        printf("%s",str);
    }
    fclose(fp);
}
