 #include<stdio.h>
int find_fact(int n){
    if(n==0 || n==1)
        return 1;
    else
        return n*find_fact(n-1);
}

int main(){
    printf("enter A number: ");
    int n;
    scanf("%d", &n);
    printf("factorial: %d", find_fact(n));
}