#include <stdio.h>
int main()
{
    int num;
    char name[15];
    float numdec1;
    double numdec2;

    printf("Enter integer: ");
    scanf("%d",&num);

     printf("Enter your name: ");
    scanf("%s",&name);

    printf("Enter decimal number: ");
    scanf("%f",&numdec1);

    printf("Enter another decimal number: ");
    scanf("%lf",&numdec2);

    printf("%d \n",num);
    printf("%.2f \n",numdec1);
    printf("%.2f \n",numdec2);
    printf("%s\n",name);


	return 0;
}
