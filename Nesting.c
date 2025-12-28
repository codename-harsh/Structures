#include<stdio.h>
#include<string.h>
typedef struct pokemon{
int hp;
int attack;
float defence;
}pokemon;
int main(){
typedef struct legendarypokemon{
    pokemon normal; // ha bhaai yahi nesting hai 
    char ability[15];
}legendarypokemon;
legendarypokemon articuno;
  articuno.normal.hp = 200;
printf("%d ",articuno.normal.hp);
}