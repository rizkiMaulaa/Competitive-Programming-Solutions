#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 54:
semudah pai*/

int main(){
    int N, i;

    scanf("%d", &N);
    for(i=1; i<=N; i++){
        if(i%3==0){
            printf("p");
        }else if(i%3==1){
            printf("a");
        }else if(i%3==2){
            printf("i");
        }
    }
    return 0;
}