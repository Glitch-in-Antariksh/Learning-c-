#include <stdio.h>
struct employee {int eid, eage;
                 char ename[20];
                 float esal;};
int main(){ struct employee e[50]; int n, i;
    // Read number of employees
    printf("Enter the number of Employees: ");
    scanf("%d", &n);
    // Read employee details
    for(i = 0; i < n; i++){
        printf("\nEnter the details of Employee : %d\n", i + 1);
        printf("Enter eid: ");
        scanf("%d", &e[i].eid);
        printf("Enter ename: ");
        scanf("%s", e[i].ename);
        printf("Enter eage: ");
        scanf("%d", &e[i].eage);
        printf("Enter esal: ");
        scanf("%f", &e[i].esal);
    }
    // Display employee details in table format
    printf("\n**************************************************\n");
    printf("Details of %d Employees are as follows\n", n);
    printf("**************************************************\n");
    printf("Empid\tEmpname\tEmpage\tEmpsal\n");
    printf("--------------------------------------------------\n");
    for(i = 0; i < n; i++){
        printf("%d\t%s\t%d\t%.2f\n",
               e[i].eid,
               e[i].ename,
               e[i].eage,
               e[i].esal);}
    printf("--------------------------------------------------\n");
    return 0;
}


