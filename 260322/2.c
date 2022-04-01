#include<stdio.h>
int main(){
  int a,b, gcd, lcm;
  printf("enter 2 numbers: ");
  scanf("%d %d", &a, &b);

  for(int i=1; i<=a; i++){
    if (a%i==0 && b%i==0)
      gcd=i;
  }
  printf("gcd: %d\n", gcd);

  lcm=a*b/gcd;
  printf("lcm: %d", lcm);
}