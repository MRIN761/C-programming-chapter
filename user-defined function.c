//Takes something    returns something    //
#include<stdio.h>
#include<conio.h>
int add(int,int);
 main ()
{
    int s,x,y;
    printf("enter two number");
    scanf("%d%d",&x,&y);
    s=add(x,y);
    printf("sum is %d",s);
    getch();
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return (c);
}

