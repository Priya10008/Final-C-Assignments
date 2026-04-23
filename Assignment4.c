#include<stdio.h>
void main()
{
float bs,hra,ta,gross,tax,net;
printf("Enter Basic Salary:");
scanf("%f",&bs);
hra = 0.10*bs;
ta = 0.05*bs;
gross = bs+hra+ta;
tax = 0.02*gross;
net = gross- tax;
printf("\nGross Salary = %f", gross);
printf("\nNet Salary = %f", net);
}
