#include <stdio.h>
int main() {
 char city;
 float basic_salary, allowance, bonus, sales;
 printf("Enter basic salary: ");
 scanf("%f", &basic_salary);
 printf("Enter years of service: ");
 int years;
 scanf("%d", &years);
 if (years > 5) {
 allowance = basic_salary * 0.1;
 } else {
 allowance = 0;
 }
 printf("Enter city ('C' for Colombo): ");
 scanf(" %c", &city);
 if (city == 'C') {
 allowance += 2500;
 }
 printf("Enter monthly sales: ");
 scanf("%f", &sales);
 if (sales < 25000) {
 bonus = sales * 0.1;
 } else if (sales < 50000) {
 bonus = sales * 0.12;
 } else {
 bonus = sales * 0.15;
 }
 float gross_salary = basic_salary + allowance + bonus;
 printf("Gross monthly remuneration: %.2f\n", gross_salary);
 return 0;
}
Practi
