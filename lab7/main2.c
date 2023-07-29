#include <stdio.h>
void func2(int n,int nn)
{
    int sum,diff;
    sum=n+nn;
    diff=n-nn;

    printf("sum:%d\n",sum);
    printf("diff: %d\n",diff);

}
int main()
{
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
    func2(num1,num2);


}
//tutorial 7-2nd question...take input from main function when there is a para
