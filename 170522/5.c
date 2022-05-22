#include<stdio.h>
struct Z{
    int rl, im;
};

void sum(struct Z *z1, struct Z *z2, struct Z *s)
{   
    s->rl = z1->rl + z2->rl;
    s->im = z1->im + z2->im;
}

int main(){
    struct Z d1, d2;
    struct  Z s;
    
    printf("enter point in real and imaginary values: ");
    scanf("%d %d", &d1.rl, &d1.im);
    
    printf("enter point in real and imaginary values: ");
    scanf("%d %d", &d2.rl, &d2.im); 
    
    sum(&d1, &d2, &s);

    printf("%dsum of both: %d + %di",s , s.rl, s.im);

}