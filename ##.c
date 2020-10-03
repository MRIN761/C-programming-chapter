#include<stdio.h>
#define ACTION(a,b) a##b*(a*b)
main()
{
    printf("%d",ACTION(4,5));
}

