#include<stdio.h>
int main(){
    int n;
    printf("enter no of elements: ");
    scanf("%d", &n);
    int ar[n];
    for(int i=0; i<n; i++){
        printf("enter a number: ");
        scanf("%d", &ar[i]);
        getchar();
    }
    
    for(int i=0; i<n/2; i++){
        int t=ar[i];
        ar[i]=ar[n-i-1];
        ar[n-i-1]=t;
    }
    printf("reversed array: ");
    for(int i=0; i<n; i++){
        printf("%d ", ar[i]);
    }
    return 0;
}