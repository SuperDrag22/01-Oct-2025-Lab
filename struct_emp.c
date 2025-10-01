// WAP to create a structure employee to input (ID, Name, Basic Pay, DA %, HRA %) and to 
// calc and print - (Gross Salary).
// and write a function to calculate salary and display details.

#include <stdio.h>
#define MAX_SIZE 1000

struct employee{
    int ID;
    char name[100];
    float basic_pay;
    float DA;
    float HRA;
    float gross_salary;
}; struct employee emp_data[MAX_SIZE];

int empInput(){
    int n,i;
    printf("Enter the number of employee record to add: "); scanf("%d",&n);

    for (i=0;i<n;i++){
        printf("\nEnter the details for employee %d: \n",i+1);

        printf("Enter the employee's ID: "); scanf(" %d",&emp_data[i].ID);
        printf("Enter the employee's Name: "); scanf(" %s",emp_data[i].name);
        printf("Enter the employees Basic Pay: "); scanf(" %f",&emp_data[i].basic_pay);
        printf("Enter the employees DA%%: "); scanf(" %f",&emp_data[i].DA);
        printf("Enter the employees HRA%%: "); scanf(" %f",&emp_data[i].HRA);
    }

    return n;
}

int grossCalc(){
    int n = empInput(),i;
    float HRA_P,DA_P,basic,gross_amt;
    
    for (i=0;i<n;i++){
        basic = emp_data[i].basic_pay;
        HRA_P = emp_data[i].HRA;
        DA_P = emp_data[i].DA;
        gross_amt = basic + (basic*(HRA_P/100)) + (basic*(DA_P/100));
        emp_data[i].gross_salary = gross_amt;
    }
    return n;
}

int displayDetails(){
    int n = grossCalc(),i;
    
    printf("The employee data is: \n");
    for (i=0;i<n;i++){
        printf("\nID:%d, Name:%s,\t Basic Pay:%.2f, %%-DA:%.2f, %%-HRA:%.2f, Gross Salary:%.2f",
        emp_data[i].ID,emp_data[i].name,emp_data[i].basic_pay,emp_data[i].DA,emp_data[i].HRA,emp_data[i].gross_salary);
    }
}

int main(){
    displayDetails();
    return 0;
}