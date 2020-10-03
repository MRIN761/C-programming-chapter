#include<stdio.h>
#include<math.h>
main()
{
    int a[100],b[100],count=0,n,i,j;
    
    printf("How many Elements");
    scanf("%d",&n);
    
    printf("\nEnter the Elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        count=1;
        if(a[i]!=-1)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    a[j]=-1;
                }
                b[i]=count;
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            printf("Number of %d is %d\n",a[i],b[i]);
        }
    }
    getch();
}