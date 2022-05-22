#include<stdio.h>
int main(){
    int n, m;
    printf("enter size of a and b arrays: ");
    scanf("%d %d", &m, &n);
    int a[n], b[m], c[m+n];
    int ai=0, bi=0;
    for(int i=0; i<m; i++){
        printf("enter value for a: ");
        scanf(" %d", &a[i]);
    }

    for(int i=0; i<n; i++){
        printf("enter value for b: ");
        scanf(" %d", &b[i]);
    }
    
    int smaller=(m<n)?m:n;

    int i=0;
    for(; i<m; i++){
        c[i]=a[i];
    }
    
    for(; i<n+m; i++){
        c[i]=b[i-m];
    }

    for(i=0; i<m+n; i++){
        printf("%d ", c[i]);
    }             
}