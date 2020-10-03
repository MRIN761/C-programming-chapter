#include<stdio.h>
#include<math.h>
void main()
{
int i,j,row,number=1;
printf("Enter the number of rows");
scanf("%d",&row);
for(i=1;i<=row;i++)
{
for(j=0;j<=i;j++)
{
printf("%d\t",number);
number++;
}
printf("\n");
}
getch();
}
