#include<stdio.h>
int main(){
   int a;
   printf("\ninput number: ");
   scanf("%d", &a);
   printf("odd/even checked with bitwise operator\n");
   if(a&1)
    printf("odd\n");
   else
    printf("even\n");
   return 0;
   
}