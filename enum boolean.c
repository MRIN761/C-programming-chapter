#include<stdio.h>
enum boolean
{
    false,true
};
enum boolean isEven(int x)
{
    if(x%2==0)
        return(false);
    else
        return(true);
};
void main()
{
    int n;
    enum boolean result;
    printf("enter a number ");
    scanf("%d",&n);
    if(n=true)
        printf("even number ");
    else
        printf("odd number ");

}
