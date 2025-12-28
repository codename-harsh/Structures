#include<stdio.h>
#include<string.h>
typedef struct stud{
char n[20]; int marks; float per;
}stud;
// void fun(stud s1,stud s2){
// if(s1.marks == s2.marks) printf("Same Marks !!");
// else printf("Different Marks :/");
// }
// int main(){
// stud s1,s2;
// for(int i=1;i<=2;i++){
//  if(i==1){printf("Enter the name, marks, percentage of student 1 : ");
//  scanf(" %[^\n] %d %f",s1.n,&s1.marks,&s1.per); }
//  else {
//     printf("Enter the name, marks, percentage of student 2 : ");
//     scanf(" %[^\n] %d %f",s2.n,&s2.marks,&s2.per);
//  }
// }
// fun(s1,s2);

int main(){
   stud s1,s2;
   s1.marks = 90; s1.per = 90.33; strcpy(s1.n, "Harsh");
stud* x = &s1;
printf("%p \n",&s1.marks);
printf("%p \n",&s1.per);
printf("%p \n",s1.marks);
}  