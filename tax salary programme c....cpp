#include<stdio.h>
int main()
{
		float tax=0,income;
	printf("enter the income:");
	scanf("%f",&income);
	if(income>=250000 && income<=500000)

{
	tax=tax+0.05*(income-250000);
}
if(income>=500000 && income<=1000000)
{
	tax+=.20*(income-500000);
}

if(income>=1000000)
{
tax+=.30*(income-1000000); 
}
printf("you will pay tax is %f",tax); 
}
