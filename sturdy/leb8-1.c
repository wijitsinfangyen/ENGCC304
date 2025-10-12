#include <stdio.h>

int main() {
    int position;              
    int years;                 
    int projects;              
    float baseSalary = 0.0;
    float expBonus = 0.0;
    float specialBonus = 0.0;
    float netSalary = 0.0;

   
    printf("Position (1=Junior, 2=Mid-Level, 3=Senior): ");
    scanf("%d", &position);

    printf("Years of Experience: ");
    scanf("%d", &years);

    printf("Number of Projects Completed this Year: ");
    scanf("%d", &projects);

   
    switch (position) {
        case 1:
            baseSalary = 20000;
            break;
        case 2:
            baseSalary = 35000;
            break;
        case 3:
            baseSalary = 50000;
            break;
        default:
            printf("Invalid position.\n");
            return 0;
    }

    
    if (years < 1)
        expBonus = 0;
    else if (years <= 3)
        expBonus = baseSalary * 0.10;
    else if (years <= 5)
        expBonus = baseSalary * 0.15;
    else
        expBonus = baseSalary * 0.20;

    
    if (projects > 5)
        specialBonus = baseSalary * 0.05;
    else
        specialBonus = 0;

    netSalary = baseSalary + expBonus + specialBonus;

   
    printf("Base Salary: %.0f THB\n", baseSalary);
    printf("Experience Bonus: %.0f THB\n", expBonus);
    printf("Special Bonus: %.0f THB\n", specialBonus);
    printf("Net Salary: %.0f THB\n", netSalary);

    return 0;
}
