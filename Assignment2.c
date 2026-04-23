#include <stdio.h>
void main()
{
int a,b,ch;
printf("Enter two numbers:");
scanf("%d %d", &a,&b);
printf("Enter operator: (1= addition, 2= subtraction, 3 = multiplication, 4 = division)");
scanf("%d", &ch);
switch(ch)
{
case 1 :
printf("Add= %d" , a+b);
break;
case 2 :
printf("Sub= %d" , a-b);
break;
case 3 :
printf("Multiply= %d" , a*b);
break;
case 4 :
printf("Division= %d" , a/b);
if (b=0)
{
printf("Invalid Division");
}
break;
default :
printf("Wrong choice");
}
}
