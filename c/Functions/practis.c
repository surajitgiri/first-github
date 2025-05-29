 #include<stdio.h>
 float add(float x,float y){
  return x+y;
 }
 float subtract(float x,float y){
  return x-y;
 }
 float multiply(float x,float y){
  return x*y;
 }
 float division(float x,float y){
  return x/y;
 }
 int main(){
  float a,b;
  printf("enter two number: ");
  scanf("%f",&a);
  scanf("%f",&b);
  printf("Simple Calculator\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Exit\n");
   int choice;
    printf("enter your choice: ");
    scanf("%d",&choice);
  switch (choice)
  {
  case 1:
      printf("%f",add(a,b));
    break;
    case 2:
      printf("%f",subtract(a,b));
    break;
    case 3:
      printf("%f",multiply(a,b));
    break;
    case 4:
      printf("%f",division(a,b));
    break;
    
  
  default:
  printf("Invalid choice ! Please Try Again");
    break;
  }
  return 0;
 }