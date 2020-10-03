#include<stdio.h>
main()
{
    int i,n,s;
    s=0;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=0;i<=n;++i)
    {
        s=s+i;
    }
    printf("sum of n no.=%d\n",s);
}
