#include<stdio.h>
#define pakistan 1
#define Nepal 2
#define COUNTRY Nepal
int main()
{

    #if COUNTRY==pakistan
    printf("BSDK");
    #elif COUNTRY==Nepal
    printf("nepali rupees ");

    #endif // COUNTRY
}
