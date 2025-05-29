#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct pokemon{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[50];
}pokemon;
void change(pokemon* x){
    //(*x).attack=85;   //same 
    x->attack=85;       //things

    (*x).hp=75;
    (*x).speed=400;
    (*x).tier='B';
  strcpy((*x).name,"lol");
  return;
}
int main(){
    pokemon pikachu={60,70,100,'A',"pikachu"};// ebhabe orderly dite hobe....either eror ese jabe|
    // pikachu.hp=60;
    // pikachu.attack=70;
    // pikachu.speed=300;
    // pikachu.tier='A';
    // strcpy(pikachu.name,"pikachu");

      printf("%d\n",pikachu.hp);
       printf("%d\n",pikachu.attack);
        printf("%d\n",pikachu.speed);
        printf("%c\n",pikachu.tier);
        printf("%s\n",pikachu.name);

        change(&pikachu);

          printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
        printf("%d\n",pikachu.speed);
        printf("%c\n",pikachu.tier);
        printf("%s\n",pikachu.name);

    return 0;
}