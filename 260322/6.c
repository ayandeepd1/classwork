#include<stdio.h>
int main(){
    int n, i=0;
    printf("enter a number: ");
    scanf("%d", &n);
    while(i++<=n){
        if(i%2)        
        continue;

        printf("%d\n", i);
    }
    return 0;
}