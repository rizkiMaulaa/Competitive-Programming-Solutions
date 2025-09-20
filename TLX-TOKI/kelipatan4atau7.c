#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 58:
kelipatan 4 atau 7*/
void main(){
    int T, N, i;

    scanf("%d", &T);

    long long int a, b, c;
    for(i=1; i<=T; i++){
        long long int m=0;
        scanf("%d", &N);
        a=N/4;
        b=N/7;
        c=N/28;
        m+=(a*(4+a*4))/2;
        m+=(b*(7+b*7))/2;
        m-=(c*(28+c*28))/2;
        printf("%lld\n", m);
    }
    
}