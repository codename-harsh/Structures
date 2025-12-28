#include<stdio.h>
#include<string.h>
typedef struct date{
int day;
int month;
int year;
}date;
int main(){
date a,b;
a.day = 04; a.month = 05; a.year = 2006;
b = a; // yes this is truly allowed !!
// but we cant compare it like if(a==b) printf(" same ") ....... its totes wrong ... wee can compare each element indivicually :)//

printf("%d ",a.day);
}