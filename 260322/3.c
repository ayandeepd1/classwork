#include <math.h>
#include<stdio.h>
int main(){
  int n; 
  int no_digits=0;
  printf("enter a number:");
  scanf("%d", &n);

  int nc=n;
  while(nc%10 != nc){
    no_digits++;
    nc/=10;
    }
  
  int div_val=pow(10.0, no_digits) + 1;
    //printf("%d\n", div_val);

  int rotated_value= (n%div_val)*10 + n/div_val; 
  printf("rotated value: %d\n", rotated_value);
  
  return 0;
}