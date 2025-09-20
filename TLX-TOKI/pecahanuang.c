#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 17:
pecahan uang*/

int main(){
    int K, L, i;
    int M[10]={1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    scanf("%d", &K);
    for(i=0; i<=9; i++){
        if(K>=M[i]){
            L=K/M[i];
            K=-L*M[i]+K;
            printf("%d %d\n", M[i], L);
        }
    }
    return 0;
}