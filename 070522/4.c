#include<stdio.h>
void bub_sort(int, int*);
int main(){
    printf("enter number of elements: ");
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++){
        printf("enter element: ");
        scanf(" %d", &arr[i]);
    }

    bub_sort(n, arr);

    printf("sorted array: ");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);
}

void bub_sort(int n, int *arr){
    for(int i=0; i<n; i++){
        for(int j=0;j<n-1; j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}