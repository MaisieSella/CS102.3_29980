#include<stdio.h>
int main()
{
       int n1,n2,n3,max;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&n1,&n2,&n3);
     max=n1;
   if(n2>max)
   {

     max=n2;
       printf("%d highest\n",max);}

 else if(n3<max)
      {
          max=n3;
         printf("%d is highest num\n",max);}
      else
      {

       printf("%d is highest num\n",max);}

}
