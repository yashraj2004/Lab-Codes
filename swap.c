#include <stdio.h>
int main()
{
int a,b;
printf("Enter two numbers\n");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("the value of a is now %d\n",a);
printf("the value of b is now %d\n",b);
return 0;
} 
