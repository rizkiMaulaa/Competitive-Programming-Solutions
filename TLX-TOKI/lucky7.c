#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 42:
lucky 7*/

int main(){
    int N, i;
    
    scanf("%d", &N);
    printf("%d\n", N-1);
    for(i=1; i<N-1; i++){
        printf("1 ");
    }
    printf("2 \n");
    return 0;
}