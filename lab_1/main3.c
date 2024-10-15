#include <stdio.h>
int main()
{
    int num;
    char name[15];
    float numdec1;
    double numdec2;

    printf("Enter integer:"); // Enter integer number
    scanf("%d",&num);

    printf("Enter your name:"); // enter character
    scanf("%s",&name);

    printf("Enter decimal number:"); // enter float number 
    scanf("%f",&numdec1);

    printf("Enter decimal number:"); // enter double number 
    scanf("%lf",&numdec2);
    // print those numbers
    printf("%d \n",num);
    printf("%.2f \n",numdec1);
    printf("%.2f \n",numdec2);
    printf("%s\n",name);
	return 0;
}
