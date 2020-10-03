#include<stdio.h>
union item
{
    int x; float y; char z;
};
void main()
{
    union item i1;
    i1.x=6;
    printf("%d",i1.x);
    i1.y=3.7;
    printf("\n %f",i1.y);
    i1.z='m';
    printf("\n %c",i1.z);

}



