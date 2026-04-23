#include <stdio.h>
void main()
{
int i,a;
printf("Enter a number");
scanf("%d" , &a);
for (i=1; i<11; i++)
{
printf("Table: \n%d" , i*a );
}
}
