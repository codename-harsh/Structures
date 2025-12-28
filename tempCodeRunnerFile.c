#include<stdio.h>
#include<string.h>
typedef union cricketer {
char name[20];
int age;
int ntm;
float avg;
}cricketer;
int main(){
cricketer c= {"Harsh",19,77,87.6};
printf("The avg run of this cricketer is : \n");
    printf("%f ",c.avg);
return 0;
}