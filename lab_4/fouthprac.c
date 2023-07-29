#include <stdio.h>

int main() {
    int i, mark, max_marks = 0, min_marks = 100, sum_marks = 0;
    float avg_marks;
    for (i = 1; i <= 10; i++) {
        printf("Enter marks of student: ");
        scanf("%d", &mark);
        if (mark > max_marks) {
            max_marks = mark;
        }
        if (mark < min_marks) {
            min_marks = mark;
        }
        sum_marks += mark;
    }
    avg_marks = (float)sum_marks / 10;
    printf("Maximum marks: %d\n", max_marks);
    printf("Minimum marks: %d\n", min_marks);
    printf("Average marks: %.2f\n", avg_marks);
    return 0;
}
