#include <stdio.h>
void main()
{
int num, a , b;
int sum = 0;

printf("Enter the number you want to check");
scanf("%d", &num);

a = num;

while(a != 0)
{
b = a % 10;
sum = sum + (b*b*b);
a = a / 10;
}

if (sum == num)
{
printf("%d is an Armstrong Number", num);
}
else
{
printf("%d is not an Armstrong Number", num);
}
}
