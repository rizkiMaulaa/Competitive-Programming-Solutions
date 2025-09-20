#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 93:
visible trees*/
int main(){
    int N, i, j;

    scanf("%d", &N);
    int A[N+5][N+5];
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            scanf("%d", &A[i][j]);
        }
    }
    int k, l;
    for(i=0; i<N; i++){
        k=0, l=0;
        for(j=0; j<N; j++){
            if(A[j][i]>=k){
                l++;
                k=A[j][i];
            }
        }
        printf("%d ", l);
    }
    printf("\n");
    for(i=0; i<N; i++){
        k=0, l=0;
        for(j=0; j<N; j++){
            if(A[i][j]>=k){
                l++;
                k=A[i][j];
            }
        }
        printf("%d\n", l);
    }
    return 0;
}