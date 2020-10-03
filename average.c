#include<stdio.h>
#include<math.h>
int main()
{
    int a[30],i;
    int sum=0;
    float avg;

    printf("enter 4  number");
    for(i=0;i<=3;++i)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<=3;++i)
    {
        sum=sum+a[i];
    }
    avg=sum/4.0;
    printf("avg=%f\n",avg);
    getch();
}
