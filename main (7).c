/* Name: Ishaan Rajani
   roll no: 08
   UIN: 241P008

 design a structure student_record to contain name, roll_number, and total marks obtained. write a program to read 5 students data from the user and then display the topper on the screen*/
#include <stdio.h>

struct student_record {
    char name[100];
    int roll_number;
    float total_marks;
};

int main() {
    struct student_record students[5]; 
    int topper_index = 0;  

    for (int i = 0; i < 5; i++) {
        printf("Enter data for student %d:\n", i + 1);

        printf("Name: ");
        getchar(); 
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);

        printf("Total Marks: ");
        scanf("%f", &students[i].total_marks);

        if (students[i].total_marks > students[topper_index].total_marks) {
            topper_index = i; 
        }
    }

    printf("\nTopper Details:\n");
    printf("Name: %s", students[topper_index].name);
    printf("Roll Number: %d\n", students[topper_index].roll_number);
    printf("Total Marks: %.2f\n", students[topper_index].total_marks);

    return 0;
}
/*output:
        Enter data for student 1:
Name: ishaan
Roll Number: 08
Total Marks: 90
Enter data for student 2:
Name: ayaan
Roll Number: 80
Total Marks:80 
Enter data for student 3:
Name: Roll Number: muz
Total Marks: Enter data for student 4:
Name: Roll Number: 17
Total Marks: 70
Enter data for student 5:
Name: amin
Roll Number: 25
Total Marks: 60

Topper Details:
Name: shaan
Roll Number: 8
Total Marks: 90.00*/
