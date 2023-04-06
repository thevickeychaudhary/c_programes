#include <stdio.h>

int main()

{
	int length;
	printf( "what is the lenght of rectangle\n");
	scanf ("%d",&length);
	int height;
	printf( "what is the height of rectangle\n");
	scanf("%d",&height);
	int area=length*height;
	printf(" the area of the rectangle is %d", area);

    return 0;
}
