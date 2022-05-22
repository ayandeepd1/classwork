#include<stdio.h>

int gcd(int a, int b){
    int gcd;
    for(int i=1; i<=a; i++){
    if (a%i==0 && b%i==0)
      gcd=i;
    }
    return gcd;
}

int main(){
    int a, b;
    printf("enter 2 nos: ");
    scanf("%d %d", &a, &b);
    printf("the gcd of 2 nos: %d", gcd(a,b));
    return 0;
}