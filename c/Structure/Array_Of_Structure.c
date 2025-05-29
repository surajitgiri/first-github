#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[50];
    }pokemon;
    pokemon arr[3];

  strcpy( arr[0].name,"pikachu");
    arr[0].attack=50;
    arr[0].hp=100;
    arr[0].speed=30;
    arr[0].tier='A';

     strcpy( arr[1].name,"charizard");
     arr[1].attack=150;
    arr[1].hp=100;
    arr[1].speed=130;
    arr[1].tier='s';

     strcpy( arr[2].name,"surajit");
     arr[2].attack=50;
    arr[2].hp=100;
    arr[2].speed=30;
    arr[2].tier='B';

    for(int i=0;i<3;i++){
        printf("%s\n",arr[i].name);
        printf("attack: %d\n",arr[i].attack);
          printf("hp: %d\n",arr[i].hp);
            printf("speed: %d\n",arr[i].speed);
              printf("tier: %c\n\n",arr[i].tier);
    }
    return 0;
}