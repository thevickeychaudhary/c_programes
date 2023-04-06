#include<stdio.h>
int main()
{
int i=0;
int n;
printf("enter the natural number : ");
scanf("%d",&n);
for(i=50;i<500;i++)
{
printf("the value of i is %d\n : ",i);
if(i==100)
{
break;
}
}
return 0;
}
