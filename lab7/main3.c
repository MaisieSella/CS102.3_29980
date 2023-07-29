#include <stdio.h>
#include <stdlib.h>

int findProduct(int x,int y)
{
    int product=x*y;
    return product;
}
int main()
{
    int pro1,pro2;
    printf("Enter two number:");
    scanf("%d %d",&pro1,&pro2);
    printf("The product is %d\n",findProduct(pro1,pro2));
}
//"pro"-product,in return- function should be called inside the main
//tutorial 7-3rd question
