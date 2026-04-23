#include <stdio.h>
void main()
{
    int choice;
    float a,b,Result;
    int i,n,fact;
 
    printf("Calculator Menu:\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Power\n");
    printf("6.Factorial\n");
   
    printf("Enter your Choice:");
    scanf("%d" , &choice);
   
    switch(choice)
    {
        case 1:
        printf("Enter two numbers:");
        scanf("%f %f", &a, &b);
        Result = a+b;
        printf("Result = %.2f\n",Result);
        break;
       
        case 2:
        printf("Enter two numbers:");
        scanf("%f %f", &a, &b);
        Result = a-b;
        printf("Result = %.2f\n",Result);
        break;
       
        case 3:
        printf("Enter two numbers:");
        scanf("%f %f", &a, &b);
        Result = a*b;
        printf("Result = %.2f\n",Result);
        break;  
       
        case 4:
        printf("Enter two numbers:");
        scanf("%f %f", &a, &b);
        if (b!= 0)
        {
          Result = a/b;
          printf("Result = %.2f\n",Result);
        }
        else
        {
          printf("Division by 0 is not allowed");
        }
        break;  
       
        case 5:
        printf("Enter base and power:");
        scanf("%f %f", &a, &b);
        Result = 1;
        for(i=1; i<=b ; i++)
         Result = Result*a;
         printf("Result = %.2f\n",Result);
        break;  
       
        case 6:
       
        printf("Enter number:");
        scanf("%d", &n);
       
        fact = 1;
        for(i=1; i<=n ; i++)
         fact = fact*i;
         printf("Result = %d\n",fact);
        break;
       
        default:
        printf("Invalid Choice");
    }
