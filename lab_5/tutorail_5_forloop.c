#include<stdio.h>
int main()
{
 int num,oddcount=0,evencount=0,count=1;
 while(count<10)
 {
 printf("Enter number %d:",count++);
 scanf("%d",&num);
 if(num==-99)
 {
 break;}
 if(num%2==0)
 evencount++;
 else
 oddcount++;
 }
 printf("even %d\n odd %d \n",evencount,oddcount);
}
