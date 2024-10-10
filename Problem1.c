//guess the output

#include<stdio.h>
struct ABC{
    char x,y,z;
};
int main()
{
    struct ABC p={'1','0','a'+2};
    struct ABC *ptr=&p;  
    printf("%c %c\n",*((char*)ptr+1),*((char*)ptr+2));
    //why typecasting? were ptr is the pointer to the whole structure therefore it is pointer to character
    printf("%d",sizeof(p));
}