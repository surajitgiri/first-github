#include<stdio.h>
#include<string.h>
int main(){
    struct pokemon{
        int hp;
        int attack;
        int speed;
    };
    struct legendarypokemon{
        int specialattack;
        struct pokemon x;
    };
    return 0;
}