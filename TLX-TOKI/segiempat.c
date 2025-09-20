#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 43:
segi empat*/

int main(){
    int N, M, A, B, h1, h2;

    scanf("%d %d", &N, &M);
    scanf("%d %d", &A, &B);

    h1=(N/A)*(M/B);
    h2=((N/B)*(M/A));
    if(h2>h1){
        printf("%d", h2);
    }else{
        printf("%d", h1);
    }
}