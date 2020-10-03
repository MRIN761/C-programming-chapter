#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[300];
    
    int vow=0,i,len,wor=0,con=0;
    
    printf("\nEnter a  line string::");
    gets(str);
    
    len=strlen(str);
    
   for(i=0;i<len;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'|| str[i]=='I' || str[i]=='A' || str[i]=='E' || str[i]=='o' || str[i]=='U')
        {
            vow++;
        }
        else if(str[i]==' ')
        {
            wor++;
        }
        else 
        {
            con++;
        }
    }
    
    printf("\nNo. of vowels=%d",vow);
    printf("\nNo. of words=%d",wor);  
    printf("\nNo. of consonants=%d",con);
    
}