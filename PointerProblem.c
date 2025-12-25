#include<stdio.h>
typedef int* ptr;
int main(){
    int a=3,b=6;
    ptr x=&a,y=&b;
    printf("%p \n",x);
    printf("%p \n",y);
}