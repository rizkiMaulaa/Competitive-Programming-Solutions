#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 56:
berbalas pantun*/
int main(){
    int N, i;
    long A, B, h=0; 

    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%ld", &A);
        h=h+A;
    }
    for(i=0; i<N; i++){
        scanf("%ld", &B);
        h=h+B;
    }
    printf("%ld", h*N);
    return 0;
}