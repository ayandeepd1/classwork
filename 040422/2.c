#include<stdio.h>
int main(){
    char cr[5];
    for(int i=0; i<5; i++){
        printf("enter a character: ");
        scanf("%c", &cr[i]);
        getchar();
    }
    int ir[5];
    for(int i=0; i<5; i++){
        ir[i]=cr[i];
    }
    
    for(int i=0; i<5; i++){
        printf("%d ", ir[i]);
    }
    
}