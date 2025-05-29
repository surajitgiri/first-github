#include <stdio.h>
#include <string.h>

#define NUM_EMPLOYEES 10

// Define a structure for Employee
struct Employee {
    char name[50];
    int empId;
    int age;
};

int main(void) {
    struct Employee employees[NUM_EMPLOYEES];
    int i, oldestIndex = 0;
    
    // Input details for each employee
    for(i = 0; i < NUM_EMPLOYEES; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        
        // Read name (using fgets to allow spaces)
        printf("Name: ");
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        // Remove the newline character if present
        size_t len = strlen(employees[i].name);
        if(len > 0 && employees[i].name[len - 1] == '\n')
            employees[i].name[len - 1] = '\0';
        
        // Read employee ID
        printf("Employee ID: ");
        scanf("%d", &employees[i].empId);
        
        // Read age
        printf("Age: ");
        scanf("%d", &employees[i].age);
        
        // Clear input buffer after reading number inputs
        getchar();
        
        printf("\n");
    }
    
    // Find the index of the oldest employee
    for(i = 1; i < NUM_EMPLOYEES; i++) {
        if(employees[i].age > employees[oldestIndex].age)
            oldestIndex = i;
    }
    
    // Display the details of the oldest employee
    printf("The oldest employee is:\n");
    printf("Name: %s\n", employees[oldestIndex].name);
    printf("Employee ID: %d\n", employees[oldestIndex].empId);
    printf("Age: %d\n", employees[oldestIndex].age);
    
    return 0;
}
