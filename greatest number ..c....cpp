#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter a number: ");
	scanf("%d",&a);
	printf("enter b number : ");
	scanf("%d");
	printf("enter c number : ");
	scanf("%d",&c);
	printf("enter d number : ");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
			printf( "large a " );	
			}else 
			printf("large d");
			
		}else 
         printf("large c");
		
			}else
	printf("large b");
	}
