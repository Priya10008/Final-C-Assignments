#include <stdio.h>

struct student {
    int roll;
    char name[50];
    float m1, m2, m3;
    float total, avg;
    char result[10];
};

int main() {
    int n, i;

    printf("Enter no of students: ");
    scanf("%d", &n);

    struct student s[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter student detail %d:\n", i+1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks (3 subjects): ");
        scanf("%f %f %f", &s[i].m1, &s[i].m2, &s[i].m3);

     
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].avg = s[i].total / 3;

        if(s[i].avg >= 40)
            sprintf(s[i].result, "Pass");
        else
            sprintf(s[i].result, "Fail");
    }

   
    printf(" Student Results\n");
    for(i = 0; i < n; i++) {
        printf("\nRoll: %d", s[i].roll);
        printf("\nName: %s", s[i].name);
        printf("\nTotal: %.2f", s[i].total);
        printf("\nAverage: %.2f", s[i].avg);
        printf("\nResult: %s\n", s[i].result);
    }

    return 0;
}
