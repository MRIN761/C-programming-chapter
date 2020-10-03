#include<stdio.h>
typedef struct
{
    int rollno;
    int age;
    char name[50];
}STUDENT ;
void main()          // TNRS  //
{
    STUDENT s1;
    s1.rollno= 339;
    printf("%d",s1.rollno);
    s1.age=18;
    printf("\n %d",s1.age);
    printf("\nMRINMOY BISWAS");
    fflush(stdin);
    gets(s1.name);

}
