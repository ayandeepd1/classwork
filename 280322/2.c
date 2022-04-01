#include<stdio.h>
int main(){
    printf("enter number of terms: ");
    int a,n,d;
    scanf("%d",&n);
    
    printf("enter first term: ");
    scanf("%d",&a);
    
    printf("enter difference: ");
    scanf("%d",&d);

    for(int i=1; i<=n; i++){
        int t=a+(i-1)*d;
        printf("%d th terms= %d\n", i, t);
    }

}