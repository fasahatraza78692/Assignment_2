#include<stdio.h>
int main()
{
	int a;
	printf("Enter a 3 digit nmbr\n");
	scanf("%d",&a);
	a=((a%10)*100+(a/10));
	printf("After right rotation the number is %d",a);
	return 0;
}
