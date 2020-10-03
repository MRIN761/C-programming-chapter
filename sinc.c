#include<stdio.h>
#include<math.h>
main()
{
    int f[100],n,i,j;
    float x;
    float s=0; x=3.0; f[0]=1.0;
    float pi=3.147;
    x=x*pi/180;
    printf("put the values of n");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        f[i]=f[i-1]*1;
    }
    for(i=1;i<=n;i=i+2);
    {
        for(j=0;j<n;j=j+0)
        {
            s=s+pow(-1,j)*(pow(x,i)/f[i]);
        }
    }
        printf("the value of s is=%f\n",s);
}

