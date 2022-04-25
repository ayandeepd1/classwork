/*delete element*/
#include<stdio.h>
int main(){
    int n;
    printf("enter value of n: ");
    scanf("%d", &n);
    
    int a[n];
    for(int i=0; i<n; i++){
        printf("enter character: ");
        scanf("%d   ", &a[i]);  
    }

    int ind;
    printf("enter index to be deleted: ");
    scanf("%d", &ind);

    for(int i=ind; i<n-1; i++)
        a[i]=a[i+1];
    
    for(int i=0; i<n-1; i++)
        printf("%d ", a[i]);
    
}