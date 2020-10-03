#include<stdio.h>
struct book
{
int bookid;
char title[20];
float price ;
};
void main()
{
struct book  b;
FILE *fp;
fp=fopen("book.inform","wb");
if(fp==NULL)
    printf("file not found");
else
    printf("file found ");
fread(&b,sizeof(b),2,fp);
printf("%d %s %f",b.bookid,b.title,b.price);
fclose(fp);
}
