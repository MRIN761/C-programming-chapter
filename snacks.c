#include<stdio.h>
#include<math.h>
main()
{
    int x,n;
    char choice;
    printf("\n a) Burger");
    printf("\n b) French fry");
    printf("\n c) pizza");
    printf("\n d) sand witch");

    printf("\n Please enter your choice --> ");
    scanf("%d",&n);

    printf("\n How much you want--> ");
    scanf("%c",&choice);

    switch (choice )
            {
            case 'a':
                scanf("%d",&n);
                x=n*50;
                printf("Burger=rs%d",x);
                break;
            case 'b':
                scanf("%d",&n);
                x=n*150;
                printf("French fry=rs%d",x);
                break ;
            case 'c':
                scanf("%d",&n);
                x=n*250;
                printf("pizza=rs%d",x);
            }
}
