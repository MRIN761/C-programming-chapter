#include<stdio.h>
#include<math.h>
 main()
 {
   float a,b,c,d,z,w;
   a=1.0;
   b=6.0;
   c=3.0;
   d=(b*b)-(4*a*c);
   if(d>=0)
   {
       z=(-b+sqrt(d))/(2.0*a);
       w=(-b-sqrt(d))/(2.0*a);
       printf("root is real \n");
       printf("z=%f\n w=%f\n",z,w);
   }
   else
   {
       printf("root is img\n");
   }

   }
