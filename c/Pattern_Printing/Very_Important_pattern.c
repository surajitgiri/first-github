// #include<stdio.h>
// int main(){
//   int n;
//   printf("Enter a Number:");
//   scanf("%d",&n);
//   int nst=n;
//   int nsp=1;
//   for(int s=1;s<=2*n+1;s++){
//     printf("* ");
//   }
//    printf("\n");
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=nst;j++){
//       printf("* ");
//     }
//     for(int k=1;k<=nsp;k++){
//       printf("  ");
//     }
//     for(int j=1;j<=nst;j++){
//       printf("* ");
//     }
//     printf("\n");
//     nst--;
//     nsp +=2;
//   }
//   return 0;
// }


#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int nst=n;
  int nsp=1;
  for(int i=1;i<=(2*n)+1;i++){
    printf("* ");
  }
  printf("\n");
  for(int i=1;i<=n;i++){
    for(int j=1;j<=nst;j++){
      printf("* ");
    }
    for(int k=1;k<=nsp;k++){
      printf("  ");
    }
    for(int p=1;p<=nst;p++){
      printf("* ");
    }
    printf("\n");
    nst--;
    nsp+=2;
  }
  return 0;
}