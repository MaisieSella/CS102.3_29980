#include <stdio.h>
#include <stdlib.h>

//3rd practical
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
//check ..para or not
