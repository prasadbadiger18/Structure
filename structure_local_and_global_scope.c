#include<stdio.h>
struct {
    char name[10];
    int age;
    int salary;
}emp1,emp2;

int manager()
{
    struct {
    char name[10];
    int age;
    int salary;
    }manager;

    manager.age=27;
    if(manager.age>30)
    {
        manager.salary=40000;
    }  
    else{
        manager.salary=4000;
    }
    return manager.salary;
}
int main()
{
    printf("enter empoyee 1 salary : ");
    scanf("%d",&emp1.salary);
    printf("enter empoyee 1 salary : ");
    scanf("%d",&emp2.salary);

    printf("manager salary : %d\n",manager());
    printf("empoyee 1 salary : %d\n",emp1.salary);
    printf("empoyee 2 salary : %d\n",emp2.salary);

}

