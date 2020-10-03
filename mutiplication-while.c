#include<stdio.h>
#include<math.h>
#define max 10
//#define b 1
int main()
{
    int a,b;
    b=1;
    printf("enter a number");
    scanf("%d",&a);
    while(b<=max)
    {
        printf("%dx%d=%d\n",a,b,a*b);
        b=b+1;
    }
}
