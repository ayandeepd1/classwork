#include<stdio.h>
/*separate even numbers and odd numbers*/
int main(){
    int n;
    printf("enter size: ");
    scanf("%d", &n);
    int a[n];
    printf("enter elements");
    for(int i=0; i<n; i++){
        scanf(" %d", &a[i]);
    }
    int indx=0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            int t=a[i];
            a[i]=a[indx];
            a[indx]=t;
            indx++;
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}