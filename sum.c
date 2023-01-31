#include <stdio.h>
int main()
{
int n,n1,n2,n3,n4,sum;
printf("Enter the 4 digit number \n");
scanf("%d",&n);
n1=n%10;
n2=(n%100)/10;
n3=(n%1000)/100;
n4=n/1000;
sum=n1+n2+n3+n4;
printf("%d\n",sum);
return 0;
}