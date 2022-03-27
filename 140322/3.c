#include<stdio.h>
#include<math.h>
int main(){
  int a,b;
   printf("enter 2 values");
   scanf("%d %d", &a, &b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("swapped using 2vars %d %d\n", a, b);
   
   printf("enter 2 values");
   scanf("%d %d", &a, &b);
   int swap;
   swap=a;
   a=b;
   b=swap;
   printf("swapped using 3 vars %d %d", a, b);
   
   return 0;

}