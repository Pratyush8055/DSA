#include <stdio.h>
int fact(int x);
int main()
{
int x,res=0;
printf("enter the number ");
scanf("%d",&x);
if(x<0)
printf("fact is not possible");
else
{
res=fact(x);
printf("factorial of number is %d",res);
}
}
int fact(int x)
{
    if(x==0)
    return 1;
    else
    return x*fact(x-1);
}
