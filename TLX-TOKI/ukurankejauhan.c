#include <stdio.h>
/*Rizki Maula_3332210011_Kelas 1/A
program nomor 71:
ukuran kejauhan*/
int main(){
    int N, i, h=0, m=0;

    scanf("%d", &N);
    int a[N];
    for(i=0; i<N; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<N; i++){
        h=0;
        m=0;
        while(h<=a[i]){
            m++;
            h=m*m;
        }
        m--;
        h=m*m;
        printf("%d^2 = %d\n", m, h);
    }
    return 0;
}