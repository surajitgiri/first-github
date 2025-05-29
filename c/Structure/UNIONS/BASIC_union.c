#include<stdio.h>
int main(){
    typedef union pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[50];
    }pokemon;
    pokemon pikachu;
       pikachu.speed=300;
    pikachu.attack=60;
    pikachu.hp=60;
    pikachu.tier='A';
    //strcpy(pikachu.name,"pikachu");

     printf("%d\n",pikachu.hp);
       printf("%d\n",pikachu.attack);
        printf("%d\n",pikachu.speed);
        printf("%c\n",pikachu.tier);
        printf("%s\n",pikachu.name);

    return 0;
}