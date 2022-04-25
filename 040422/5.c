#include<stdio.h>
int main(){
    int n;
    printf("enter value of n: ");
    scanf("%d", &n);
    int a[n], b[n+1];
    for(int i=0; i<n; i++){
        printf("enter a no: ");
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
    
    int n1, val;
    printf("\nenter index: ");
    scanf("%d", &n1);
    printf("enter value: ");
    scanf("%d", &val);
    
    for(int i=0; i<n1; i++)
        b[i]=a[i];
    
    b[n1]=val;

    for(int i=n1+1; i<=n; i++)
        b[i]=a[i-1];

    for(int i=0; i<=n; i++)
        printf("%d ", b[i]);

    return 0;
}     
    