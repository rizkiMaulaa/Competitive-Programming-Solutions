#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 62:
bukan kelipatan*/
int main(){
    int A, B, C, i;

    scanf("%d %d %d", &A, &B, &C);
    for(i=2; i<=100; i++){
        if((i%A)!=0 && (i%B)!=0 && (i%C)!=0){
            printf("%d", i);
            break;
        }
    }
    return 0;
}