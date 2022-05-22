#include<stdio.h>

int find_gcd(int a, int b){
    if(a%b==0)
        return b;
    else
        return find_gcd(b, a%b);
}

int main(){
    int n, m;
    printf("enter 2 nos: ");
    scanf("%d %d", &n, &m);
    if(n<m){
        n=n+m;
        m=n-m;
        n=n-m;
    }
    printf("gcd of %d and %d = %d", n, m, find_gcd(n,m));
}