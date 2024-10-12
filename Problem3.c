// Array of Structures: Define a structure for a Student with fields for name, roll number, and marks.
// Create an array of students and initialize it with sample data.

#include<stdio.h>
#include<string.h>
struct Student{
    char name[20];
    int RollNo;
    float marks;
};
int main()
{
    struct Student Student1[10];
    for(int i=0;i<1;i++)
    {
        char nameOfstudent[10];
        
        printf("Enter the name of student %d : ",i+1);
        scanf("%s",&nameOfstudent);

        strcpy(Student1[i].name,nameOfstudent);
        
        printf("Enter the roll number of student %d :",i+1);
        scanf("%d",&Student1[i].RollNo);

        printf("Enter the marks of the student %d : ",i+1);
        scanf("%f",&Student1[i].marks);
    }

    for(int i=0;i<1;i++)
    {
        printf("Name of Student : %s\n",Student1[i].name);
        printf("Roll No : %d\n",Student1[i].RollNo);
        printf("Marks : %f\n",Student1[i].marks);
    }
    
}