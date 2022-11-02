#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter two values\n");
	scanf("%d %d",&x,&y);
	printf("Values before swapping\n");
	printf("x= %d,y=%d\n",x,y);
	y=y+x;
	x=y-x;
	y=y-x;
	printf("Values after swapping\n");
	printf("x= %d,y=%d",x,y);
	return 0;
}
