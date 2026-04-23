#include <stdio.h>
void main()
{
int a,b,c,d,e;
float total,percentage;
printf("Enter the marks for Maths,Chemistry,English,Social,Physics");
scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
if(a < 40 || b < 40 || c < 40 || d < 40 || e < 40)
{
printf("The Student has failed.");
}
else
{
total = a+b+c+d+e;
percentage = (total/500) * 100 ;

 printf("Total Marks= %f\n", total);
 printf("Aggregate Percentage = %f\n", percentage);
   
    if ( percentage >= 75)
    {
    printf("Grade : Distinction");
    }
    else if (percentage >= 60 && percentage < 75)
    {
    printf("Grade : First Division");
    }
    else if ( percentage >= 50 && percentage < 60)
    {
    printf("Grade : Second Division");
    }
    else
    {
    printf("Grade : Third Division");
    }
    }
}
