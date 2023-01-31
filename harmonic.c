#include <stdio.h>
void main()
{
int n;
float i, sum=0;
printf("Enter the number \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    sum=sum+(1/i);
}
printf("%f",sum);
}