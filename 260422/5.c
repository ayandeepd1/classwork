#include<stdio.h>
int mul(int n){
    return n*8;
}
int main(){
    for(int i=1; i<=10; i++){
        printf("1 x %d = %d\n", i, mul(i));
    }
    return 0;
}