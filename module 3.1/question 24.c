#include <stdio.h>

int main() {
    char name[50];
    float salaries;
    float total_salary = 0;
    float average_salary;
    
    printf("Enter the names and salaries of %d employees:\n", name);
    for (int i = 0; i <name; ++i) {
        printf("Employee %d name: ", i + 1);
        scanf("%s", name);
        printf("Employee %d salary: ", i + 1);
        scanf("%f", &salaries);
        total_salary += salaries;
    }
    average_salary = total_salary / salaries;
    
    printf("\nTotal salary: %.2f\n", total_salary);
    printf("Average salary: %.2f\n", average_salary);
    
    return 0;
}

