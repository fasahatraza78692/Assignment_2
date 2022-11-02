#include<stdio.h>

int main()
{
    int x,d;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("Enter a digita\n");
    scanf("%d",&d);
    x*=10;
    x+=d;
    printf("Complete Number =  %d",x);
    return 0;
}
