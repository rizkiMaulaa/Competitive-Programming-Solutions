#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 41:
pak dengklek dan deret*/
int main(){
    int N, i;

    scanf("%d", &N);
    if(N>=1 && N<=100){
        for(i=1; i<=N; i++){
            printf("%d", i);
            if(i!=N){
                printf("+");
            }
        }
    }
    return 0;
}