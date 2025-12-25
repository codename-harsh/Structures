#include<stdio.h>
int main(){
struct pokemon{
int hp;
int attack;
float defence;
}pikachu,charizard;
//struct pokemon pikachu;
pikachu.attack = 66;
pikachu.defence = 44;
pikachu.hp = 89;
//struct pokemon charizard;
charizard.attack = 130;
charizard.defence = 39;
charizard.hp = 99;
printf("%.1f",pikachu.defence);


}