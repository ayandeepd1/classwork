#include<stdio.h>
#include<math.h>
int main(){
  int n;
  printf("enter a no: ");
  scanf("%d", &n);
  
  int rev=0;

  while(n>0){
    rev=rev*10 + n%10;
    n/=10;
  }
  printf("reversed val: %d", rev);
  return 0;
}