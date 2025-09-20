#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 96:
membeli mainan*/
int main(){
    int X, A, B, C, h, l, s;

    scanf("%d", &X);
    scanf("%d %d %d", &A, &B, &C);
    h=A+B+C;
    l=(X/h)*3;
    s=X%h;
    if(A+B<=s || A+C<=s || B+C<=s){
        l+=2;
    }else if(A<=s || B<=s || C<=s){
        l++;
    }
    printf("%d", l);
    return 0;
}