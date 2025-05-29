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
void fun( pokemon p){
    p.attack=60;
    printf("%d\n",p.hp);
     printf("%d\n",p.attack);
      printf("%d\n",p.speed);
    return ;
}
int main(){
   
  pokemon pikachu;
   pikachu.hp=60;
   pikachu.attack=50;
   pikachu.speed=100;
   fun(pikachu);
    return 0;
}