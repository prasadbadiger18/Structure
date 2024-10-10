#include<stdio.h>
typedef struct  car
{
    char model[100]; 
    char name[100];
    float milege;
    int fuelCapacity;
}car;

int main()
{
      car c1[5];
      for(int i=0;i<1;i++)
      {
        printf("enter the model name : ");
        scanf("%s",&c1[i].model);

        printf("enter name : ");
        scanf("%s",&c1[i].name);

        printf("enter the milege : ");
        scanf("%f",&c1[i].milege);

        printf("enter fuel capacity : ");
        scanf("%d",&c1[i].fuelCapacity);

    
      }

      for(int i=0;i<1;i++)
      {
        printf("model name : %s\n",c1[i].model);
        printf(" name : %s\n",c1[i].name);
        printf("milege: %f\n",c1[i].milege);
        printf("model name : %d\n",c1[i].fuelCapacity);
      }
}