#include<stdio.h>
main ()
{
extern int x;
printf("%d",x);
f1();
printf("\n%d",x);
}
int x;
void f1()
{
x++;
printf("\n%d",x);
}
