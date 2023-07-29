#include <stdio.h>
int main() {
 char name[20];
 float basic_salary, in, new_salary;
 printf("Enter employee name: ");
 scanf("%s", name);
 printf("Enter basic salary: ");
 scanf("%f", &basic_salary);
 if (basic_salary < 5000) {
 in = basic_salary * 0.05;
 } else if (basic_salary < 10000) {
 in = basic_salary * 0.1;
 } else {
 in = basic_salary * 0.15;

}
 new_salary = basic_salary + in;
 printf("Employee name: %s\n", name);
 printf("New salary: %.2f\n", new_salary);
 return 0; }
