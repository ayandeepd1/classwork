#include<stdio.h>

int array_sum_rec(int *a, int i){
    if(i==0 && a[i]%2==0)
        return a[i];
    else if(i==0 && a[i]%2!=0)
        return 0;
    else if(a[i]%2==0)
        return a[i]+array_sum_rec(a, i-1);
    else if (a[i]%2!=0)
        return array_sum_rec(a, i-1);
}

int main(){
    int n;
    printf("enter length of array: ");
    scanf("%d", &n);
    int array[n];
    for(int i=0; i<n; i++){
        printf("enter element: ");
        scanf(" %d", &array[i]);
    }

    printf("sum of all even numbers in array: %d", array_sum_rec(array, n-1));
}