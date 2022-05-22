#include<stdio.h>
int main(){
    int r1, c1, r2, c2;
    printf("enter row and column of matrix one: ");
    scanf("%d %d", &r1, &c1);
    printf("enter row and column of matrix two: ");
    scanf("%d %d", &r2, &c2);
    if(!((r1==r2) && (c1==c2))){
        printf("addition not possible"); return 0;
    }
    int m1[r1][c1], m2[r2][c2], m3[r2][c2];
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("enter values of row(%d) col(%d): ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("%d\t", m1[i][j]);
        }printf("\n");
    }
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            printf("enter values of row(%d) col(%d): ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            printf("%d\t", m2[i][j]);
        }printf("\n");
    }
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            m3[i][j]=m2[i][j]-m1[i][j];
        }
    }
    printf("subtracted matrices are: \n");
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            printf("%d\t", m3[i][j]);
        }printf("\n");
    }
}