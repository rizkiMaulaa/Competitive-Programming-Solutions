#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 55:
tetris tahun baru*/
int main(){
    int N;

    scanf("%d", &N);
    if(N%2==0){
        printf("%d", N*N);
    }else{
        printf("%d", N*N-1);
    }
    return 0;
}