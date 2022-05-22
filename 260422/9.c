#include<stdio.h>

int mul_add(int n, int m){
    int mul=0;
    for(int i=0; i<n; i++)
        mul+=m;
    return mul;
}

int main(){
    printf("enter 2 nos: ");
    int n, m;
    scanf("%d %d", &n, &m);
    printf("product of both= %d", mul_add(n,m));
    return 0;
}