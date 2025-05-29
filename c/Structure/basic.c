#include<stdio.h>
int main(){
    struct pokemon{ // user difind data type
        int hp;
        int speed;
        int attack;
       char tier;   //S,A,B,C,D
    };
    struct pokemon pikachu;
    printf("enter attack : ");
    scanf("%d",&pikachu.attack);
    //pikachu.attack=60;
    pikachu.hp=50;  // dot operators;
    pikachu.speed=100;
    pikachu.tier='A';

    struct pokemon charizard;
    charizard.attack=130;
    charizard.hp=80;
    charizard.speed=80;
    pikachu.tier='S';
    printf("%c",pikachu.tier);
    
    return 0;
}