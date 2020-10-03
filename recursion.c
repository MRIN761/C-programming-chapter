#include<stdio.h>
#include<math.h>
main()
{
    int k;
    k=mul(7);
    printf("%d",k);
}
int mul(int a)
{
    int s;
    if(a==1)
        return (a);
    s=a*mul(a-1);
    return (s);
}




