#include<stdio.h>
int main(){
    printf("enter a number: ");
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        if(n%i==0){
            int f=0;
            for(int j=2; j<=i/2+1; j++)
                if(i%j==0)
                    f++;    
            if (f==0)
                printf("prime factor: %d\n", i);
        }
    }
}