#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 26:
tumpukan gelas*/

int main(){
    int N;

    scanf("%d", &N);
    if(N>=4 && N<=100){
        if(N%2==0){
            printf("Tidak");
        }else{
            printf("Perlu");
        }
    }
    return 0;
}