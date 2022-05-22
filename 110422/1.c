/*Ascending bubble sort*/
#include<stdio.h>
int main(){
    int n=9;
    int a[]={3,1,5,7,2,8,6,13,0};
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
}