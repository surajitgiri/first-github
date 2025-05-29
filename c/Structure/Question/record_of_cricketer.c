#include<stdio.h>
#include<string.h>
int main(){
   typedef struct cricketer{
    char firstname[50];
    char lastname[50];
    int age;
    int testmatch;
    float average;
  }cricketer;
 struct cricketer arr[4]; // if you use typedef ..you use it without struct
  for(int i=0;i<4;i++){
    scanf("%s",arr[i].firstname);
    scanf("%s",arr[i].lastname);
    scanf("%d",&arr[i].age);
     scanf("%d",&arr[i].testmatch);
      scanf("%f",&arr[i].average);
  }
  printf("\n");
   for(int i=0;i<4;i++){
        printf("name: %s %s\n",arr[i].firstname,arr[i].lastname);
            printf("age: %d\n",arr[i].age);
              printf("testmatch: %d\n",arr[i].testmatch);
               printf("average: %f\n\n",arr[i].average);
    }
    return 0;
}