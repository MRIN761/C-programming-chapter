#include<stdio.h>
#include<conio.h>
main()
{
    char s[36];
    printf(" enter your name");

    gets(s);         //s=1000=&s[0]

    puts(&s[0]);
    getch();
}
