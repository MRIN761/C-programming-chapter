#include<stdio.h>
#include<conio.h>
#include<string.h>
 main()
{
    char str[500];
    
    int i,l;
  
    printf("Enter a word:: ");
    gets(str);
    
    l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        if(str[i]!=str[l-1-i])
        {
            printf(" Not palindrome");
            break;
        }     
    }
    if (i==l/2)
    {
        printf("Palindrome");
    }
    
    
}