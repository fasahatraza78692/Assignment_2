#include<stdio.h>

int main()
{
   int a,s=0;
   printf("Enter a number");
   scanf("%d",&a);
   while(a>0)
   {
     s=s+a%10;
     a=a/10;
   }
      
   printf("%d",s);
   return 0;
}
