#include <stdio.h>
int main()
{
int n,i;
printf("Enter the number \n");
scanf("%d",&n);
for(i=0;i<=n;i+=2)
{
    printf("\n%d",i);
}
return 0;
}