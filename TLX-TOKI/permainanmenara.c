#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 23:
permainan menara*/

int main(){
    int N, M, i, j;

    scanf("%d %d", &N, &M);

    if(N>=1 && M<=100){
        for(i=0; i<N; i++){
            for(j=0; j<M; j++){
                if(j%2==0){
                printf("W");
                }else{
                printf("B");
                }
            }
            printf("\n");
        }
    }
    return 0;
}