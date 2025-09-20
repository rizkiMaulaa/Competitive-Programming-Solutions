#include <stdio.h>
#include <math.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 84:
pemberat*/
int main(){
    long long B, K;

    scanf("%lld %lld", &B, &K);
    K=K-B;
    B=pow(2, 61);
    while(K>0){
        if(K>=B){
            K=K-B;
            printf("%lld\n", B);
        }
        B=B/2;
    }
    return 0;
}