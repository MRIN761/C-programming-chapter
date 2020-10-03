#include <stdio.h>

 int main()
{
   int i;
   int sum = 0;
   int n1, n2;
   printf("Enter two numbers  \n");
   scanf("%d %d",&n1,&n2);
   for(i=n1;i<=n2;i++)
   {
     if(i%3==0)
     {
       sum=sum+n1;
       n1=n1+1;
     }
     printf("1st if sum=%d",sum);
       if(i%7==0)
     {
         sum = sum+n1;
         n1=n1+1;
     }
     printf("2nd if sum=%d",sum);

   }
   printf("\nThe sum : %d \n",sum);
return 0;

}
