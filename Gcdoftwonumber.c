#include<stdio.h>
#include<conio.h>
int main()
{
    int  n1,n2,i,gcd;
    
    printf("Enter two numbers");
    scanf("%d %d",&n1,&n2);
    
    while(n1!=n2)
    {
        if(n1>n2)
       
            n1-=n2;
     
        else
  
            n2-=n1;      
        
    }
    printf("GCD =%d",n1);
    return 0;
}