#include<stdio.h>
int find_sum(int n, int *arr){
    int s=0;
    for(int i=0; i<n; i++){
        printf("address of element(%d): %p\n", i, &arr[i]);
        s+=arr[i];
    }
    return s;
}

int main(){
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++){
        printf("enter value: ");
        scanf(" %d", &arr[i]);
    }
    int sum=find_sum(n, arr);
    printf("sum=%d", sum);
    
    return 0;
}