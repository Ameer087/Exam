#include<stdio.h>
int add(int x,int y)
{
return x+y;
}
int multiply(int x,int y)
{
return x*y;
}
int subtract(int x,int y)
{
return x-y;
}
int main()
{
int a,b;
printf("Enter the first number:");
scanf("%d",&a);
printf("Enter the second number:");
scanf("%d",&b);
int sum=add(a,b);
int pdt=multiply(a,b);
int diff=subtract(a,b);
printf("Result values are %d\n",sum);
printf("Result values are %d\n",pdt);
printf("Result values are %d\n",diff);
return 0;
}

