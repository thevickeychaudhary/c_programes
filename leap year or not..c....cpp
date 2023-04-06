#include<stdio.h>
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(num%4 ==0 && num%100 ==0 && num%400 ==0)
	{
		printf("this is  a leap year",num);
	}
	else
	{printf("this is not a leap year",num);
	}
	return 0;
}
