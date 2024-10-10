#include<stdio.h>
#include <string.h>
struct{
    char model[100]; 
    char name[100];
    float milege;
    int fuelCapacity;
}car1,car2;

int main()
{
     strcpy(car1.model,"Prasad");
     printf("%s",car1.model);

     car1.milege=10.4;
     printf("%f",car1.milege);
}