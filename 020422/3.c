#include<stdio.h>
int main(){
    int ar[20];
    for(int i=0; i<5; i++){
        printf("enter a number: ");
        scanf("%d", &ar[i]);
    }
    for(int i=0; i<5; i++){
        if(ar[i]%2==0)
        printf("%d ", ar[i]);
    }
    
    return 0;
}