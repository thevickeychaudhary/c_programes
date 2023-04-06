#include<stdio.h>
int main()
{ char ch;   //=97-z=122//
printf("enter a character:");
scanf("%c",&ch);
if(ch<=122 && ch>=97)
{
	printf("the character is lowercase");
}
else
{
	printf("the character is not a lower case");
}
}
