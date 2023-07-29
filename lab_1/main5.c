#include<stdio.h>
int main()
{
    float no1,no2,aver,total;
    printf("Enter number with decimals: \n");
    scanf("%f",&no1);
    printf("Enter number with decimals: \n");
    scanf("%f",&no2);
    total=no1+no2;
    aver=total/2;
    printf("The average of two decimal is %.2f\n",aver);
    return 0;

}
