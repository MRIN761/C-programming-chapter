#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float area,s;
    printf("put the value of a,b,c");
    scanf("%d  %d  %d",&a, &b, &c);
    s=(a+b+c)/2.0;
    s=(s*(s-a)*(s-b)*(s-c));
    area=sqrt(s);
    printf("area of the triangle is %f\n",area);
}
