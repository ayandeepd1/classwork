    #include<stdio.h>
int main(){
    int n;
    printf("enter edge size of square matrix:  ");
    scanf("%d", &n);
    int m1[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("enter values of row(%d) col(%d): ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }
    printf("original array\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d\t", m1[i][j]);
        }
        printf("\n");
    }
    
    printf("upper diagonal: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j<i)
                printf("0\t");
            else
                printf("%d\t", m1[i][j]);
        }
        printf("\n");
    }
    printf("lower diagonal: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j>i)
                printf("0\t");
            else
                printf("%d\t", m1[i][j]);
        }
        printf("\n");
    }
}