#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 64:
wilayah pion*/
int main(){
    int N, M;

    scanf("%d %d", &N, &M);
    if(N%4!=0 || M%4!=0){
        printf("No");
    }else{
        printf("Yes");
    }
    return 0;
}