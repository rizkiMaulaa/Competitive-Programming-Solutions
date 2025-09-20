#include <stdio.h>

int main(){
    int K, A, i, j;
    char C;

    scanf("%d %c %d", &K, &C, &A);
    for(i=1; i<=K; i++){
        for(j=1; j<=K; j++){
            if(i==j || j==K-i+1){
                printf("%d", A);
            }else{
                printf("%c", C);
            }
        }
        printf("\n");
    }
}