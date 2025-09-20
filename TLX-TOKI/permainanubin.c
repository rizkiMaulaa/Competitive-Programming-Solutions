#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 22:
permainan ubin*/

int main(){
    int N, M;

    scanf("%d %d", &N, &M);
    if(N>=2 && M<=100){
        if(N%2==0 && M%2==0){
            printf("%d", N*M);
        }
    }
    return 0;
}