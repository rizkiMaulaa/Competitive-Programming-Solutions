#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 73:
penghasilan jokemart*/
int main(){
    int i, s=0;
    unsigned long long A[4], h=0;

    for(i=0; i<4; i++){
        scanf("%llu", A+i);
        s=s+(A[i]%4);
        h=h+(A[i]/4);
    }
    h=h+(s/4);
    s=s%4;
    s=s*25;
    printf("Rp %llu,%02d\n", h, s);
    return 0;
}