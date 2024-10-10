// #include<stdio.h>
// struct {
//     char name[10];     //for global use
//     int age;
//     int salary;
// }emp1,emp2;

// int manager()
// {
//     struct {
//     char name[10];
//     int age;          //for local use
//     int salary;
//     }manager;

//     manager.age=27;
//     if(manager.age>30)
//     {
//         manager.salary=40000;
//     }  
//     else{
//         manager.salary=4000;
//     }
//     return manager.salary;
// }
// int main()
// {
//     printf("enter empoyee 1 salary : ");
//     scanf("%d",&emp1.salary);
//     printf("enter empoyee 1 salary : ");
//     scanf("%d",&emp2.salary);

//     printf("manager salary : %d\n",manager());
//     printf("empoyee 1 salary : %d\n",emp1.salary);
//     printf("empoyee 2 salary : %d\n",emp2.salary);

// }


//instead of using structure two times for global and local we can create 
//one structure and use it wherever in code

#include<stdio.h>
      //Tag name
struct employee{
    char name[10];     
    int age;
    int salary;
};

int manager()
{
    struct employee manager;   //using structure from its tag name

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
    struct employee emp1;
    struct employee emp2;
    printf("enter empoyee 1 salary : ");
    scanf("%d",&emp1.salary);
    printf("enter empoyee 1 salary : ");
    scanf("%d",&emp2.salary);

    printf("manager salary : %d\n",manager());
    printf("empoyee 1 salary : %d\n",emp1.salary);
    printf("empoyee 2 salary : %d\n",emp2.salary);
}