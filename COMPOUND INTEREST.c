#include<stdio.h>
#include<math.h>
main()
{
    int p,t;
    float r,A;
    printf("enter p and t");
    scanf("%d%d",&p,&t);
    printf("enter r");
    scanf("%f",&r);
    A=p*pow( (1+ r/100),t);
    printf("compound interest= %f\n",A);

}
