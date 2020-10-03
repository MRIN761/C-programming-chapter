#include<stdio.h>
#include<math.h>
main()
{
    int n1,n2,i,s=0;
    printf("Enter value of n1 and n2");
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
            if(i%3==0 || i%7==0)
            {
                s=s+i;
             
            }
     }
      printf("\nsum is=%d",s);

        
}