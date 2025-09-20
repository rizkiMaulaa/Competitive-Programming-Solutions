#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 92:
magic square*/
int main(){
    int T;

    scanf("%d", &T);
    while(T--){
        long long N;
        scanf("%lld", &N);
        printf("%lld\n", N*(N*N+1)/2);
    }
    return 0;
}