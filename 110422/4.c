#include<stdio.h>
int main(){
    int n,m;
    printf("enter 2 sizes: ");
    scanf("%d %d", &n, &m);
    int an[n], am[m];
    for(int i=0; i<n; i++){
        printf("enter value of array 1: ");
        scanf(" %d", &an[i]);
    }
    for(int i=0; i<m; i++){
        printf("enter value of array 2: ");
        scanf(" %d", &am[i]);
    }
    printf("array1: ");
    for(int i=0; i<n; i++)
        printf("%d ", an[i]);
    printf("\narray2: ");
    for(int i=0; i<m; i++)
        printf("%d ", am[i]);
    printf("\n");

    int a_union[n+m], a_inter[n+m];
    int inter_count=0, union_count=0;
    for(union_count=0; union_count<n; union_count++){
        a_union[union_count]=an[union_count];
    }
    for(int i=0; i<m; i++){
        char flag=0;
        for(int j=0; j<union_count; j++){
            if(a_union[j]==am[i]){
                a_inter[inter_count++]=am[i];
                flag=1;
            }
        }
        if(!flag)
            a_union[union_count++]=am[i];
    }
    printf("union of arrays: \n");
    for(int i=0; i<union_count; i++)
        printf("%d ", a_union[i]);
    printf("\nintersection of arrays:\n");
    for(int i=0; i<inter_count; i++)
        printf("%d ", a_inter[i]);    
}