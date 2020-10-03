#include<stdio.h>
#include<math.h>
main()
{
   int s,i;
   s=0;
      for(i=1;i<=100;i=i+2);
   {
   s=s+i;
   }
   printf("the sum is =%d\n the last digit is=%d\n",s,i);
}
