    #include<stdio.h>
int main(){
    int r1, c1;
    printf("enter row and column of matrix one: ");
    scanf("%d %d", &r1, &c1);
    
    int m1[r1][c1], m2[c1][r1];

    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("enter values of row(%d) col(%d): ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("original array\n");
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            printf("%d\t", m1[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
             m2[j][i]=m1[i][j];
        }
    }
    printf("transpose of array: \n");
    for(int i=0; i<c1; i++){
        for(int j=0; j<r1; j++){
            printf("%d\t", m2[i][j]);
        }
        printf("\n");
    }
    
}