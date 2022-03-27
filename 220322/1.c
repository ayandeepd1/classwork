#include<stdio.h>
#include<math.h>
int main(){
   int n, f = 1;
   printf("Enter a number");
   scanf("%d", &n);
   while(n>0){
       f *= n--;
   }
    printf("factorial of %d is %d ",n, f);

}