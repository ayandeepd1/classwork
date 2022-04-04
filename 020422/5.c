#include<stdio.h>
int main(){
    float ar[4];
    for(int i=0; i<5; i++){
        printf("enter a number: ");
        scanf("%f", &ar[i]);
        getchar();
    }
    float grt=0;
    for(int i=0; i<5; i++){
        if(ar[i]>grt)
        grt=ar[i];
    }
    printf("greatest is: %f", grt);
    return 0;
}