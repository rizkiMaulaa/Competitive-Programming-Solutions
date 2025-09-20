#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 98:
susu moli*/
int main(){
    int T, N, A, B, K, i;

    scanf("%d", &T);
    int h[T];
    for(i=0; i<T; i++){
        scanf("%d %d %d %d", &N, &A, &B, &K);
        h[i]=N+(B*K)-(A*K);
    }
    for(i=0; i<T; i++){
        printf("Kasus #%d: %d\n", i+1, h[i]);
    }
    return 0;
}