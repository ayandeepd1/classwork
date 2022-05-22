 #include<stdio.h>
int find_mul(int a, int b){
    if(a==0)
        return 0;
    else if(a==1)
        return b;
    else
        return b+find_mul(a-1, b);
}

int main(){
    int a,b;
    printf("enter 2 nos: ");
    scanf("%d %d", &a, &b);
    printf("product: %d", find_mul(a,b));
}