#include<stdio.h>
#include<math.h>
main()
{
    int a,i;
    printf("enter the value");
    scanf("%d",&a);

    for(i=1;i<=10;i=i+1)
        printf("%dx%d=%d\n",a,i,a*i);
}
