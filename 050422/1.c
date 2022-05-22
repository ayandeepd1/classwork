#include<stdio.h>
int main(){
    int n, m;
    printf("enter size of a and b arrays: ");
    scanf("%d %d", &m, &n);
    int a[n], b[m], c[m+n];
    int ai=0, bi=0;
    for(int i=0; i<m; i++){
        printf("enter sorted value for a: ");
        scanf(" %d", &a[i]);
    }
    
    for(int i=0; i<n; i++){
        printf("enter sorted value for b: ");
        scanf(" %d", &b[i]);
    }

    for(int i=0; i<m; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    
    for(int i=0; i<n; i++){
        printf("%d ", b[i]);
    }
    printf("\n");

    int i;
    for(i=0; i<m+n; i++){
        if(a[ai]<b[bi]){
            c[i]=a[ai];
            if(ai<m)
                ai++;
        }
        else{
            c[i]=b[bi];
            if(bi<n)
                bi++;
        }
    }
    for(i=0; i<m+n; i++){
        printf("%d ", c[i]);
    }             
}