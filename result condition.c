#include<stdio.h>
#include<math.h>
main()
{
    int number;
    printf("enter the number");
    scanf("%d",&number);
    if(number>50)
    {
        printf("pass");
    }
    else
    {
        printf("fail");
    }
    getch();
}
