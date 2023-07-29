#include <stdio.h>
int calSum(int x,int y)
{
    int sum;
    sum=x+y;
    return sum;
}
int main()
{
    int a,b;
    printf("Enter two numbers ");
    scanf("%d %d",&a,&b);
    printf("The sum is %d\n",calSum(a,b));
}
//5th practical no return/add void/no para meters/then call function
