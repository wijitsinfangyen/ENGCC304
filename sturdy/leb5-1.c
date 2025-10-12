#include <stdio.h>

int main() {
    char id[11];
    int hrs;
    float rate, total;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", id);

    printf("Input the working hrs: ");
    scanf("%d", &hrs);

    printf("Salary amount/hr: ");
    scanf("%f", &rate);

    total = hrs * rate;

    printf("----\nExpected Output:\n");
    printf("Employees ID = %s\n", id);
    printf("Salary = U$ %.2f\n", total);
}
