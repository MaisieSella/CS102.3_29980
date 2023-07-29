#include<stdio.h>
int main()
{
    char sname[15];
    int byear,age;
    printf("Enter student name: ");
    scanf("%s",&sname);
    printf("Enter birth of year: ");
    scanf("%d",&byear);
    age=2023-byear;

    printf("student name:%s \n",sname);
    printf("Student age: %d\n",age);
    return 0;

}
