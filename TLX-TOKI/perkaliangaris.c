#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 67:
perkalian garis*/
int main(){
    int A, B, p=0, q=0;

    scanf("%d %d", &A, &B);

    while(A>=1 && A<=1000000000){
        p+=(A%10);
        A/=10;
    }
    while(B>=1 && B<=1000000000){
        q+=(B%10);
        B/=10;
    }
    printf("%d", p*q);
    return 0;
}