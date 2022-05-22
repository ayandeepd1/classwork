#include<stdio.h>
int main(){
    int n,m;
    printf("enter 2 array sizes: ");
    scanf("%d %d", &n, &m);

    int narray[n], marray[m];

    int xarray[m+n];

    for(int i=0; i<n; i++){
        printf("enter value for 1st array: ");
        scanf(" %d", &narray[i]);
    }
    for(int i=0; i<m; i++){
        printf("enter value for 2nd array: ");
        scanf(" %d", &marray[i]);
    }
    printf("array1: ");
    for(int i=0; i<n; i++)printf("%d ", narray[i]);
    printf("\narray2: ");
    for(int i=0; i<m; i++)printf("%d ", marray[i]);

    int x=0;
    for(; x<n; x++)
        xarray[x]=narray[x];
    
    for(int i=0; i<m; i++){
        char flag=0;
        for(int j=0; j<x; j++){
            if(marray[i]==xarray[j]){
                for(int k=j; k<x; k++)
                    xarray[k]=xarray[k+1];
                x--;
                flag=1;
            }
        }
        if(!flag)
            xarray[x++]=marray[i];
    }
    printf("\nXOR array: \n");
    for(int i=0; i<x; i++)
        printf("%d ", xarray[i]);
}