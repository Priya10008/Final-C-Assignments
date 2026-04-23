#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
char name[50];
char designation[50];
char gender;
char doj[20];
float salary;
};

int main() {
int n, i, male = 0, female = 0;
struct EMPLOYEE emp[100];

printf("Enter number of employees: ");
scanf("%d", &n);

for(i = 0; i < n; i++) {
getchar(); // consume newline
printf("Enter details of employee %d\n", i+1);
printf("Name: ");
fgets(emp[i].name, sizeof(emp[i].name), stdin);
emp[i].name[strcspn(emp[i].name, "\n")] = 0;

printf("Designation: ");
fgets(emp[i].designation, sizeof(emp[i].designation), stdin);
emp[i].designation[strcspn(emp[i].designation, "\n")] = 0;

printf("Gender (M/F): ");
scanf("%c", &emp[i].gender);

getchar();
printf("Date of Joining: ");
fgets(emp[i].doj, sizeof(emp[i].doj), stdin);
emp[i].doj[strcspn(emp[i].doj, "\n")] = 0;

printf("Salary: ");
scanf("%f", &emp[i].salary);
}

printf("\nTotal Employees = %d\n", n);

for(i = 0; i < n; i++) {
if(emp[i].gender == 'M' || emp[i].gender == 'm') male++;
else if(emp[i].gender == 'F' || emp[i].gender == 'f') female++;
}
printf("Male Employees = %d\nFemale Employees = %d\n", male, female);

printf("Employees with salary > 10000:\n");
for(i = 0; i < n; i++) {
if(emp[i].salary > 10000)
printf("%s\n", emp[i].name);
}

printf("Employees with designation 'Asst Manager':\n");
for(i = 0; i < n; i++) {
emp[i].designation[strcspn(emp[i].designation, "\n")] = 0;
if(strcmp(emp[i].designation, "Asst Manager") == 0)
printf("%s\n", emp[i].name);
}

return 0;
}
