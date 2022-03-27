#include<stdio.h>
int main(){
    int f=-1, s=1, t, n;
    printf("enter a number: ");
    scanf("%D", &n);
    for(int i=0; i<n; i++){
        t=f+s;
        f=s;
        s=t;
        printf("%d\n", t);
    }
}