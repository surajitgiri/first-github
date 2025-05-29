#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[50];
    }pokemon;
 typedef struct legendarypokemon{
        pokemon normal;
        char ability[10];
    }legendarypokemon;
typedef struct godpokemon{
    legendarypokemon legend;
    int specialattack;
}godpokemon;

    // legendarypokemon mewto;

//    strcpy( mewto.normal.name,"mewto");
//    mewto.normal.hp=50;
    godpokemon lalu;
    lalu.legend.normal.hp=563;
   strcpy( lalu.legend.ability,"arceus");

   printf("%s\n",lalu.legend.ability);
 printf("%d", lalu.legend.normal.hp);
    return 0;
}