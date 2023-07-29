#include<stdio.h>
int main()
{
char opt;
float num1,num2;
printf("Enter a operator (+,-,*,/): \n");
scanf("%c",&opt );
printf("Enter values for two operaters: num1 and num2 :\n ");
scanf("%f%f",&num1,&num2 );
switch(opt)
 {
case '+':
printf("the add of two number is :%.2f\n",num1+num2);
break;
case '-':
printf("the sub of of two number : %.2f\n",num1-num2 );break;
case '*':
printf("multi of two number is :%.2f\n",num1*num2);break;
case'/':
printf("divi of two number is: %.2f\n",num1/num2);break;
default:
printf("\n You have entered Invalid num");
}}
