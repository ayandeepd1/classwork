#include<stdio.h>
int main(){
  int a, count=0;
  printf("enter a value: ");
  scanf("%d", &a);
  for(int i=2; i<=a/2; i++){
    if (a%i==0)
      count++;
  }
  if (count)
  printf("no prime\n");
  else
  printf("prime\n");
}