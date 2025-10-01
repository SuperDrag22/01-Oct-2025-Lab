// WAP to define a structure named 'student' with roll no., name and marks and write 
// functions to input and display student details


#include <stdio.h>
#define MAX_SIZE 1000

struct student{
    int rollno;
    char name[100];
    float marks;
}; struct student stud_data[MAX_SIZE];

int structinput(){
    int n,i;
    printf("Enter the number of student records: ");
    scanf("%d",&n);

    for (i=0;i<n;i++){
        printf("\n\nEnter the details for student %d:\n",i+1);

        printf("Enter student's roll no.: "); scanf(" %d",&stud_data[i].rollno);
        printf("Enter student's name: "); scanf(" %s",&stud_data[i].name);
        printf("Enter student's marks (in decimal): "); scanf(" %f",&stud_data[i].marks);
    }
    return n;
}

int main(){ 
    int n = structinput();
    int i;
    for (i=0;i<n;i++){
        printf("\nroll: %d, name:%s, marks:%.2f",stud_data[i].rollno,stud_data[i].name,stud_data[i].marks);
    }
    return 0;
}