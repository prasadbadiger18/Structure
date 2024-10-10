#include<stdio.h>
typedef struct name{
    int a;
}xxx;
int main()
{
   xxx n;
   struct  name *ptr=&n;
   ptr->a=10;
   printf("name: %d\n", ptr->a);
}