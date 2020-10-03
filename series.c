#include<stdio.h>
#include<math.h>
main()
{
   int s1,s2,s,i,j,n;
   s1=0;
   s2=0;

   printf("which terms to calculate");
   scanf("%d",n);
    for(i=1;i<=n;i=i+2)
    {
    s1=s1+i;
   }
    for(j=2;j<=n;j=j+2)
   {
   s2=s2+j;
   }
   s=(s1-s2);
     printf("the sum is=%d\n",s);
}
