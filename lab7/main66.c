#include <stdio.h>
void func2(int n,int nn)
{
    printf("sum:%d\n",n+nn);
    printf("differance:%d\n",n-nn);

}
int main()
{
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d",num1,num2);
    func2(num1,num2);



}
//2nd practical...threr's error check
