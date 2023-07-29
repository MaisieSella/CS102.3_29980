#include <stdio.h>

int main()
{
 int no1,no2 ;
 printf("Please Enter Two different values\n");
 scanf("%d %d", &no1, &no2);

 if(no1 > no2)
 {
 printf("%d is Largest\n", no1);
 }
 else if (no2> no1)
 {
 printf("%d is Largest\n", no2);
 }
 else
 {
printf("Both are Equal\n");
 }

 return 0;
}
