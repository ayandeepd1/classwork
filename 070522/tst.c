#include<stdio.h>
struct st{
     float f;char a[3];
};

int main(){
    struct st a;
    printf("%d", sizeof(a));
}