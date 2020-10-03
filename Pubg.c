#include<stdio.h>
 main()
{
char str[20];
FILE *fp;
fp=fopen("pubg.txt","a");
printf("enter a map name ");
gets(str);
fputc(str,fp);
fclose(fp);
}
