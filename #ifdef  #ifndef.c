#include<stdio.h>
#define COUNTRY India
int main()
{
    #ifdef COUNTRY
    printf("%s It is bose's country",COUNTRY );
    #endif // COUNTRY
    #ifndef COUNTRY
    printf("I love my nation ");
    #endif // COUNTRY
}
