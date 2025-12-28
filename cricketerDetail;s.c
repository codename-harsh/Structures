#include<stdio.h>
#include<string.h>
typedef struct cricketer {
char name[20];
int age;
int ntm;
float avg;
}cricketer;
int main(){
cricketer c[3];
printf("Enter the name, age, no of test matches and average runs : \n");
for(int i=0;i<3;i++){
    scanf("%[^\n]s",c[i].name);
    scanf("%d",&c[i].age);
    scanf("%d",&c[i].ntm);
    scanf("%f",&c[i].avg);
}
printf("The details of these cricketers are : \n");
for(int i=0;i<3;i++){
    printf("%s ",c[i].name);
    printf("%d ",c[i].age);
    printf("%d ",c[i].ntm);
    printf("%f ",c[i].avg);
}
return 0;
}