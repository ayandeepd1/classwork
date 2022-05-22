#include<stdio.h>

int mul_add(int n, int m){
    int q=0;
    while(n>=m){
        q++;
        n-=m;
    }
    return q;
}

int main(){
    printf("enter 2 nos: ");
    int n, m;
    scanf("%d %d", &n, &m);
    printf("quotient of %d / %d= %d", n, m, mul_add(n,m));
    return 0;
}