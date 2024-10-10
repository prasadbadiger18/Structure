//PADDING
// #include<stdio.h>
// struct ABC{
//     char a;
//     int b;
//     char c;
// }var;
// int main(){
//     struct ABC var;
//     printf("%d",sizeof(var));
// }

//PACKING

#include<stdio.h>
#pragma pack(1)            //include this pack to save memory
struct ABC{
    char a;
    int b;
    char c;
}var;
int main(){
    struct ABC var;
    printf("%d",sizeof(var));
}