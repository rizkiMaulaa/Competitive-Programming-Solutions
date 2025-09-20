#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 99:
land maximization*/
int main(){
    int N, i, j;

    scanf("%d", &N);
    int h=0;

    for(i=1; i<=N; i++){
        for(j=1; j<=N; j++){
            if(i<=N/2 && j>N/2){
                h-=(i-1)*N+j;
            }else if(i>N/2 && j<=N/2){
                h-=(i-1)*N+j;
            }else{
                h+=(i-1)*N+j;
            }
        }
    }
    printf("%d", h);
    return 0;
}