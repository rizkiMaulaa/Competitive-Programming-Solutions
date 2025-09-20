#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 27:
faktorial*/

int main(){
    int N, m=0;

    scanf("%d", &N);
    while(N){
        N=N/5;
        m=m+N;
    }
    printf("%d", m);
    return 0;
}