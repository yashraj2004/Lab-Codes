#include <stdio.h>
int main()
{
float f,c;
printf("enter the temperature in celcius\n");
scanf("%f",&c);
f=((9*c)/5)+32;
printf("temperature in farenhiet is %f\n",f);
return 0;
}