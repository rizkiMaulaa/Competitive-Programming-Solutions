#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 70:
menggambar pola*/
int main(){
    int N, M, i, j;

    scanf("%d %d", &N, &M);
    for(i=1; i<=N; i++){
        for(j=1; j<=M; j++){
            if(i%2==0 && j%2==0){
                printf("#");
            }else if(i%2==1 && j%2==1){
                printf("*");
            }else{
                printf("$");
            }
        }
        printf("\n");
    }
    return 0;
}