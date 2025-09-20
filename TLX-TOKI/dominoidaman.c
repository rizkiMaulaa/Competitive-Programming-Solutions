#include <stdio.h>
#include <math.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 95:
domino idaman*/
long long h(long long x, long long y, long long z){
    long long m=1;
    while(y>0){
        if(y%2==1){
            m*=x;
            m%=z;
        }
        y>>=1;
        x=(x*x)%z;
    }
    return m;
}
int main(){
    long long N, M;

    scanf("%lld %lld", &N, &M);
    printf("%lld", h(2, N*M-1, 998244353));
    return 0;
}