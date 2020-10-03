#include<stdio.h>
#include<math.h>
main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    printf("enter 4 values of 1st matrix ");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
      printf("enter 4 values of 2nd matrix ");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("sum of two matrix is %d  ",c[i][j]);
        }
        printf("\n");
    }

}
getch();
