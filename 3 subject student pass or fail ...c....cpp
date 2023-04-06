#include<stdio.h>
int main()
{
	int physics,chemistry,math;
	float total;
	printf("enter the physics mark\n");
	scanf("%d",&physics);
	printf("enter the chemistry mark\n");
	scanf("%d",&chemistry);
	printf("enter the math mark\n");
	scanf("%d",&math);
	total=physics+chemistry+math/3;
	if((total<40)|| physics<33|| chemistry<33|| math<33)
	{ printf("your total percentage is %f and you fail",total);
	} else
{
	printf("your total percentage is %f and you pass",total);
}
return 0;
}
