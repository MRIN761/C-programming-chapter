#include<stdio.h>
#include<math.h>
main()
{
    int x,n;
    char choice;
    printf("\n Burger");
    printf("\n French fry");
    printf("\n pizza");
    printf("\n sand witch");

    printf("\n enter a number");
    scanf("%d",&n);

    printf("\n enter a choice ");
    scanf("%c",&choice);

    switch (choice )
            {
            case 1:
                scanf("%d",&n);
                x=n*50;
                printf("Burger=rs%d",x);
                break;
            case 2:
                scanf("%d",&n);
                x=n*150;
                printf("French fry=rs%d",x);
                break ;
            case 3:
                scanf("%d",&n);
                x=n*250;
                printf("pizza=rs%d",x);
                break ;
            case 4:
                scanf("%d",&n);
                x=n*500;
                printf("sand witch =rs%d",x);
            default:
                printf("\n not available ");

            }
            getch();

}
