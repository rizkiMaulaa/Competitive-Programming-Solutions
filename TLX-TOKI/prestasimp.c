#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 52:
prestasi merah putih*/
int main(){
    int N, A[100], X, i;

    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%d", &A[i]);
    }
    scanf("%d", &X);
    for(i=1; i<=N; i++){
        if(A[i-1]==X){
            printf("%d", i);
            break;
        }
    }
    return 0;
}