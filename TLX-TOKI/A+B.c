#include <stdio.h>

/*Rizki Maula_3332210011_Kelas 1/A
program nomor 65:
A + B*/
int main(){
    int A, B, i, m=0, h=1;

    scanf("%d %d", &A, &B);
    if(B<1009){
        for(i=1; i<=B; i++){
            h=h*i;
            h=h%1009;
        }
        m=m+h;
    }
    m=m+A;
    m=m%1009;
    printf("%d", m);
    return 0;
}