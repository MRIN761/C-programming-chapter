#include<stdio.h>
#include<conio.h>
#include<math.h>
 main()
{
int a,b;
char c;
printf("what you want to do\n1.Add\n2.Substract\n3.Multiply\n4.Divided\n");
printf("Enter your choice here:");
scanf("%c",&c);
printf("Enter 1st and 2nd Number:-");
scanf("%d %d",&a,&b);
switch(c)
{
case '+':
printf("Add.of Two number is %d",a+b);
break;
case '-':
printf("subtract.of Two number is %d",a-b);
break;
case '*':
printf("Multiply.of Two number is %d",a*b);
break;
case '/':
printf("Division.of Two number is %d",a/b);
break;
default:
    printf("invalid operator");

}

return 0;
}
