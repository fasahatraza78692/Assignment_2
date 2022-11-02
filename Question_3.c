#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter two values\n");
	scanf("%d %d",&x,&y);
	printf("Values before swapping\n");
	printf("x= %d,y=%d\n",x,y);
	z=x;
	x=y;
	y=z;
	printf("Values after swapping\n");
	printf("x= %d,y=%d",x,y);
	return 0;
}
