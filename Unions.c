#include<stdio.h>
#include<string.h>
typedef union cricketer {
char name[20];
int age;
int ntm;
float avg;
}cricketer;
int main(){
cricketer c;
strcpy(c.name,"harsh");
c.age=19;
c.ntm =8;
c.avg = 99.5;
printf("The avg run of this cricketer is : \n");
    printf("%.1f ",c.avg);
return 0;
}