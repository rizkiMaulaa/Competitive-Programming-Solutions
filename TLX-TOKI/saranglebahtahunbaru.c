#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 81:
sarang lebah tahun baru*/
int main(){
    int A, B, C, D, E, F, h, m, h1, h2, h3, ha;

    scanf("%d %d %d %d %d %d", &A, &B, &C, &D, &E, &F);
    h=F+A+B-2;
    m=h*(h+1)/2;
    h1=B*(B-1)/2;
    h2=D*(D-1)/2;
    h3=F*(F-1)/2;
    ha=m-(h1+h2+h3);
    printf("%d", ha);
    return 0;
}