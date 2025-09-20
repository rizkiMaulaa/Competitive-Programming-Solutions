#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 50:
absolute winner*/
int main(){
    int A, B, C, h;

    scanf("%d %d %d", &A, &B, &C);
    h=(4*(A+B+C))/7;
    if(A==h){
        printf("YA");
    }else if(B==h){
        printf("YA");
    }else if(C==h){
        printf("YA");
    }else{
        printf("TIDAK");
    }
    return 0;
}