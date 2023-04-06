#include<stdio.h>
int main()
{
int i=0,n;
int skip=5;
printf("enter the natural number : ");
scanf("%d",&n);
for(i=0;i<20;i++)
{
				
if(i!=skip)
{
continue;
}
  else
{
printf("the value of i is %d\n : ",i);
} 

}
return 0;
}
