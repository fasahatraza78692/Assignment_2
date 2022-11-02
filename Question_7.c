#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);
	x&1?printf("Num is Odd"):printf("Num is Even");
	return 0;
}
