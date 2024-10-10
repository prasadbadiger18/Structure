//here we are using struct keyword to avoiding writing struct keyword again and again

//typedefine allows us to create our own data type
//syntax : typedefine struct -new data type-

#include<stdio.h>
#include<string.h>

typedef struct car{
    char name[10];
}car;
int main()
{
   car c1;
   strcpy(c1.name,"prasad");
   printf("%s",c1.name);
}