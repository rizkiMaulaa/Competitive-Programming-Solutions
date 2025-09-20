#include <stdio.h>
#include <math.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 38:
kuadrat sempurna*/
int main(){
    int M, N;

    scanf("%d", &M);
    N=sqrt(M);
    if(M%N==0){
        printf("%d", N);
    }else{
        printf("0");
    }
    return 0;
}