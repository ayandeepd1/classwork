#include<stdio.h>
int main(){
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int f=1;
        for(int j=i; j>0; j--){
            f*=j;
        }

        printf("%d\n", f);
    }
}