#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 102:
bolongan tahun baru*/
int main(){
    int N, i;
    
    scanf("%d", &N);
    if(N==1){
        printf("0");
    }else if(N==0){
        printf("1");
    }else{
        if(N%2==0){
            for(i=0; i<N/2; i++){
                printf("8");
            }
        }else{
            printf("4");
            N--;
            for(i=0; i<N/2; i++){
                printf("8");
            }
        }
    }
    return 0;
}