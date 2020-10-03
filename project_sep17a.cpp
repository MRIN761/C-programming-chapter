#include<stdio.h>
#include<math.h>
main()
{
    int m,n;
    
    printf("Enter two number");
    scanf("%d %d",&m,&n);
   
    m=m+n;
    n=m-n;
    m=m-n;
    
    printf(" m=%d n=%d",m,n);
}