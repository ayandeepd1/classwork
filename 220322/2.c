#include<stdio.h>
#include<math.h>
int main(){
    printf("enter value of n: ");
    int n, i=1;
    scanf("%d", &n);
    do{
        printf("%d\n", (int)pow(i, 2));
    }while (i++<=n);
    
}