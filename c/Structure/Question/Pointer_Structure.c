#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[50];
}pokemon;
int main(){
    pokemon pikachu;
    pikachu.speed=300;
    pikachu.attack=60;
    pikachu.hp=60;
    pikachu.tier='A';
    strcpy(pikachu.name,"pikachu");
    pokemon* x=&pikachu;
      printf("%d\n",pikachu.hp);
   
    (*x).hp=41;               //  bracket must dite hobe
    printf("%d",pikachu.hp);
    return 0;
}