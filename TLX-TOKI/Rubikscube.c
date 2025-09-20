#include <stdio.h>
#include <math.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 88:
rubik's cube*/
int main(){
    int T, i;
    long long int h, m;

    scanf("%d", &T);
    int N[T];
    for(i=0; i<T; i++){
        scanf("%d", &N[i]);
    }
    for(i=0; i<T; i++){
        h=N[i]-2;
        h=pow(h,3);
        m=pow(N[i],3);
        printf("%d\n", m-h);
    }
    return 0;
}